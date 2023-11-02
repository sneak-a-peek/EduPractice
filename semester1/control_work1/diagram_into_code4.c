#include <stdio.h>

int main() {
    int n = 6;
    int i;
    int j;
    int A[i][j];

    for (i = 1; i < n; i++)
        for (j = 1; j < n; j++)
            int A[i][j];
    int q = 0;
    for (i = 1; i < n - 1; i++)
        for (j = 1; j < n - 1; j++)
            if (A[i][j] < 0)
            q = q + 1;
    printf("%d\n", q);

    return 0;
}
