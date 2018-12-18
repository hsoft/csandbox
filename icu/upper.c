#include <stdio.h>
#include <unicode/ustring.h>

#define MAXLEN 16

int main(void)
{
    UErrorCode e;
    char *src = "école";
    char dest[MAXLEN] = {0};
    UChar l[MAXLEN] = {0};
    UChar u[MAXLEN] = {0};
    u_strFromUTF8(l, MAXLEN, NULL, src, -1, &e);
    u_strToUpper(u, MAXLEN, l, -1, NULL, &e);
    u_strToUTF8(dest, MAXLEN, NULL, u, -1, &e);
    printf("Upper (utf8): %s\n", dest);
}
