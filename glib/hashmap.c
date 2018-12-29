#include <glib.h>

#define LEN 3

typedef struct {
    int sortval;
    char *display;
} Item;

int main(void)
{
    Item items[LEN] = {{2, "foo"}, {1, "bar"}, {42, "baz"}};
    GHashTable *h;

    h = g_hash_table_new(NULL, NULL);
    for (int i=0; i<LEN; i++) {
        g_hash_table_insert(h, items[i].display, &items[i]);
    }

    Item *found = g_hash_table_lookup(h, "baz");
    g_print("%d %s\n", found->sortval, found->display);
}
