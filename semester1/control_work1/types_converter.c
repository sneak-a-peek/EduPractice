#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float x, y;
    int z;

    scanf("%f%d", &y, &z);
    x = y / z;
    printf("%f\n", x);

    return 0;
}
