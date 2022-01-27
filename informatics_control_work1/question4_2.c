#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x, y, z;

    scanf("%d%d", &y, &z);
    x = y%z;

    printf("%d\n", x);

    return 0;
}
