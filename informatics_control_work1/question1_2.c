#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float y, z;
    int x;

    scanf("%f%f", &y, &z);
    x = (int)y / (int)z;
    printf("%d\n", x);

    return 0;
}
