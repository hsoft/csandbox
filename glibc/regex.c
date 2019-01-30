#include <stdio.h>
#include <regex.h>

int main(void)
{
    char *patterns[] = {"^foo$", "foo", "ba*r$", NULL};
    char *tomatch[] = {"foo", "bar", "foobar", "barfoo", "foobaar", NULL};
    regex_t re;

    char **pattern_iter = patterns;
    while (*pattern_iter) {
        printf("Compiling pattern %s\n", *pattern_iter);
        regcomp(&re, *pattern_iter, REG_NOSUB);
        char **match_iter = tomatch;
        while (*match_iter) {
            printf("Matching %s... ", *match_iter);
            if (regexec(&re, *match_iter, 0, NULL, 0) == 0) {
                printf("match!\n");
            } else {
                printf("nope!\n");
            }
            match_iter++;
        }
        regfree(&re);
        pattern_iter++;
    }

    return 0;
}
