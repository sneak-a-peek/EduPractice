#include <stdio.h>

int main() {
    int n = 10;
    int p = -1;
    int m = -1;
    int i = 1;
    int X[n] = {1, 3, 0, -10, 5, 9, 8, -6, -7, 0};

    for (i = 1; i < n; i++)
        int X[i];
    while (X[i] != 0 && i <= n)
        {
            i = i + 1;
        }
    if (i = n)
        {
            p = i;
        }
    else if (i < n)
        {
            p = i;
            i = i + 1;
            while (X[i] != 0 && i <= n)
                {
                    i = i + 1;
                }
            if (i <= n)
                {
                    m = i;
                }
        }
    
    printf("%d %d\n", p, m);
    
    return 0;
}
