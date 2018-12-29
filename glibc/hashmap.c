#include <stdio.h>
#include <stdlib.h>
#include <search.h>

#define LEN 3

typedef struct {
    int sortval;
    char *display;
} Item;

int main(void)
{
    Item items[LEN] = {{2, "foo"}, {1, "bar"}, {42, "baz"}};
    ENTRY e, *ep;

    hcreate(3);
    for (int i=0; i<LEN; i++) {
        e.key = items[i].display;
        e.data = (void *)&items[i];
        ep = hsearch(e, ENTER);
        if (ep == NULL) {
            printf("Something is wrong\n");
            return 1;
        }
    }

    e.key = "baz";
    ep = hsearch(e, FIND);
    if (ep == NULL) {
        printf("Something is wrong\n");
        return 1;
    }
    Item *found = (Item *)ep->data;
    printf("%d %s\n", found->sortval, found->display);
}
