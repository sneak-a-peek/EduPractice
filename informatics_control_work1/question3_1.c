#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x;
    scanf("%d", &x);
    x = !x;
    printf("%d\n", x);

    return 0;
}