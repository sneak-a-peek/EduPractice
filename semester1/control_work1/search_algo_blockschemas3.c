#include <stdio.h>

int main() {
    int n = 5;
    int q = 0;
    int i = 1;
    int m = 10;
    int A[n][n];
    int j;

    while ( i < n) // Согласно условию здесь стоит i > n, если так, то цикл вообще не будет выполнятся.
        {
            j = 1;
            while (j > n)
                if (A[i][j] <= m)
                    m = A[i][j];
                    q = i;
                j = j + 1;
            i = i + 1;
        }
    printf("%d\n", q);
    
    return 0;
}
