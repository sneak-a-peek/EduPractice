#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);
    if (z < y && z < x && y < x) 
        //printf("%d %d %d\n", x, y, z);
        printf("X[%d]; Y[%d]; Z[%d];\n", x, y, z);
    else
        //intf("%d %d %d\n", z, x, y);
        printf("Z[%d]; X[%d]; Y[%d];\n", z, x, y);

    return 0;
}
