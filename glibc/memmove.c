#include <stdio.h>
#include <string.h>

#define LEN 3

typedef struct {
    int val;
    char *display;
} Item;

int main(void)
{
    Item items[LEN] = {{2, "foo"}, {1, "bar"}, {42, "baz"}};

    Item buf;
    memcpy(&buf, &items[2], sizeof(Item));
    memmove(&items[1], &items[0], sizeof(Item) * 2);
    memcpy(&items[0], &buf, sizeof(Item));

    for (int i=0; i<LEN; i++) {
        printf("%d %s\n", items[i].val, items[i].display);
    }

    memmove(&items[0], &items[1], sizeof(Item) * 2);
    memcpy(&items[2], &buf, sizeof(Item));

    for (int i=0; i<LEN; i++) {
        printf("%d %s\n", items[i].val, items[i].display);
    }
}
