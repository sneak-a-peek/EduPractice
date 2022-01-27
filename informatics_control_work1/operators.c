#include <stdio.h>

int main() {
    int *x, y, z;

    scanf("%d", &y);
    x = &y;
    z = *x;

    printf("%d\n", z);

    return 0;
}