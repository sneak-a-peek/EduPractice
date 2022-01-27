#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, n;

    scanf("%d", &i);
    do {
        i++; n++;
    }
    while (i < 50);
    printf("%d %d\n", n, i);

    return 0;
}
