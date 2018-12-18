#include <stdio.h>
#include <stdlib.h>

#define LEN 3

typedef struct {
    int sortval;
    char *display;
} Item;

int cmp(const void *a, const void *b)
{
    const Item **i1 = (const Item **)a;
    const Item **i2 = (const Item **)b;

    return (*i1)->sortval - (*i2)->sortval;
}

int main(void)
{
    Item items[LEN] = {{2, "foo"}, {1, "bar"}, {42, "baz"}};
    Item *sorted_items[LEN];

    for (int i=0; i<LEN; i++) {
        sorted_items[i] = &items[i];
    }

    qsort(sorted_items, LEN, sizeof(Item *), cmp);

    for (int i=0; i<LEN; i++) {
        printf("%s\n", sorted_items[i]->display);
    }
}
