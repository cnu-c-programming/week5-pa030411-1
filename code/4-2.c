#include <stdio.h>
#include <stdlib.h>

void echo(void) {
    char buf[5];
    fgets(buf, sizeof(buf), stdin);
    printf("%s\n", buf);
}

int main(void) {
    int x = 42;
    echo();
    (void)x;
    return 0;
}
