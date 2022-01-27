#include <stdio.h>

int main() {
    int n = 5;
    int q = 1;
    int i;
    int j;
    int A[i][j];
    int S[i];

    for (i = 1; i < n; i++)
        int S[i] = {0};
        for (j = 1; i < n; j++)
            int A[i][j];
            S[i] = S[i] + A[i][j];
        if (S[q] < S[i])
            {
                q = i;
            }           

    printf("%d\n", q);

    return 0;
}