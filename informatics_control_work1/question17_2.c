#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, j = 1;

    for (i = 0; i < 5; i++) {
        printf("%d \n", j);
        j += 2;
    }
    
    return 0;
}
