#include <stdio.h>
int uadd_ok(unsigned int x, unsigned int y) {
    return x + y >= x;
    return 0;
}

int main() {
    printf("%d\n", uadd_ok(1, 2));
    return 0;
}
