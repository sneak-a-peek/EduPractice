#include <stdio.h>

int main() {
    int n = 17;
    int q = 0;
    int i;
    int X[n] = {8, 6, 4, 3, 2, 4, 2, 5, 8, 7, 5, 9, 4, 2, 6, 6, 9};
    int M[i];

    //scanf("%d\n", n);
    for (i = 1; i < n; i++)
        int X[i];
    for (i = 1; i < 10; i++)
        int M[i] = {0};
    for (i = 1; i < n; i++)
        M[X[i]] = M[X[i]] + 1;
    for (i = 1; i < 10; i++)
        if (M[i] > 1)
            q = q + i * M[i];

    printf("%d\n", q);

    return 0;
}
