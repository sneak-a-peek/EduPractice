#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float x, y;
    int z;
    scanf("%f%d", &y, &z);
    x = (int) y/z;
    printf("%d\n", x);
    
    return 0;
}
