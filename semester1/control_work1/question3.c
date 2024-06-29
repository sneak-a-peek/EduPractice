#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if (y < x && x < z && y < z) printf("%d\n%d\n%d\n", x, y, z);
        else printf("%d\n%d\n%d\n", z, y, x);
    return 0;
}
