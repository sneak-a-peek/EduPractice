#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

int main(int argc, char* argv[])
{
    int A[N] = {1, 2, 3};

    for(int i = 0; i < N; ++i)
        A[N - i - 1] = i;

    for(int i = 0; i < N; ++i)
        printf(" %d ", A[i]);
    
    return 0;
}
