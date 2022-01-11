#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    for (i = 0; i < 12; i += 3) printf("%d\n");  // i += 1 == i = i + 1

    return 0;
}