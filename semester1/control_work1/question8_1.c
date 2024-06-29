#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    for (i = 0; i < 5; i++);
    printf("%d\n ", 2 * (i + 1) + 1);

    return 0;
}
