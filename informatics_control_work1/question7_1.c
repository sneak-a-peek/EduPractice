#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int *x, y, z;
    scanf("%d", &y);
    x = &y;
    z = *x;
    printf("%d\n", z);

    return 0;
}
