#include <stdio.h>

int main(void) {
    int val = 7;
    int other = 77;

    const int *const p = &val;

    printf("%d\n", *p);
    (void)other;
    return 0;
}
