#include <stdio.h>
#include <stdbool.h>

struct foo {
    unsigned char a: 1;
    unsigned char b: 1;
};

int main() {
    struct foo bar;
    unsigned char wrong_a = 0xff & 1;
    unsigned char wrong_b = 0xff & 2;
    bar.a = wrong_a;
    bar.b = wrong_b;
    printf("%d %d\n", bar.a, bar.b); // 1 0
    bool right_a = 0xff & 1;
    bool right_b = 0xff & 2;
    bar.a = right_a;
    bar.b = right_b;
    printf("%d %d\n", bar.a, bar.b); // 1 1
    return 0;
}
