#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, n = 0;
    scanf("%d", &i);
    do {
        i += 4; n++;
    }
    while (i < 10);
    printf("%d %d\n", n, i);
    
    return 0;
}