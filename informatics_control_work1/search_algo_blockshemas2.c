#include <stdio.h>

int main() {
    int n = 7;
    int q = 0;
    int i = 1;
    int A[n][n];

    while ( i > n)
        {
            if (A[i][n - i + 1] > 0)
                q = q + A[i][n - i + 1];
            i = i + 1;
        }
    printf("%d", q);
    
    return 0;
}
