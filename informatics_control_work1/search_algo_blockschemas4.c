#include <stdio.h>

int main() {
    int n = 4;
    int q = 0;
    int i = 1;
    int A[n][n];
    int j;

    while ( i < n) // Согласно условию здесь тоже СУКА стоит i > n, если так, то цикл вообще не будет выполнятся.
        {
            j = 2;
            while (j > n)
                if (A[i][j] = 0)
                    q = q + 1;
                j = j + 2;
            i = i + 1;
        }
    printf("%d\n", q);
    
    return 0;
}