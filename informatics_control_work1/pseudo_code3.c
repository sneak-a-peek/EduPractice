#include <stdio.h>

int main() {
    int n = 6;
    int i;
    int j;
    int k;
    int A[n][n];

    for (i = 1; i < n; i++)
        for (j = 1; j < n; j++)
            int A[i][j];
    int q = 0;
    int f = 0;
    for (i = 1; i < n - 1; i++)
        for (j = 1; j < n - 1; j++)
            if (A[i][j] = 0)
                {
                    for (k = 1; k < n; k++)
                    q = q + A[i][j];
                }
            f = 1;
            j = n + 1;
            i = n + 1;
    if (f = 0)
        {
            q = 1;
        }
    printf("%d\n", q);

    return 0;
}