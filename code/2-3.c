#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c = 30, d = 40;
    int *arr[] = {&a, &b, &c, &d};
    int **pp = arr;

    int **base = arr;

    printf("%lld\n", (long long)((char *)pp - (char *)base));

    pp = pp + 1;
    printf("%lld\n", (long long)((char *)pp - (char *)base));

    pp = pp + 1;
    printf("%lld\n", (long long)((char *)pp - (char *)base));

    pp = pp + 1;
    printf("%lld\n", (long long)((char *)pp - (char *)base));

    return 0;
}
