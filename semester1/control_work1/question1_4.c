#include <stdio.h>

int main() {
    int n, i;
    int X[i];
    int M[i];

    for (i = 1; i < n; i++)
        int X[i] = {1, 1, 5, 6, 5, 7, 1, 5, 4, 9, 3, 5, 5, 5, 6, 4, 10, 5, 8};

    for (i = 1; i < 10; i++)
        int M[i] = {0};

    int q = 0;
    for (i = 1; i < n; i++)
        M[X[i]] = M[X[i]] + 1;
    for (i = 1; i < 10; i++)
        if (M[i] = 1)
            q = q + 1;
    printf("%d\n", q);

    return 0;
}
