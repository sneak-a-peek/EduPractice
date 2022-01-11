#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x, y;
    scanf("%d%d", &x, &y);
    x %= y;
    printf("%d\n", x);
    
    return 0;
}