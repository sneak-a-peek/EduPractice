#include <stdio.h>

int main() {
    int n = 7;
    int p = -1;
    int m = -1;
    int i = 1;
    int X[n];

    for (i = 1; i < n; i++)
        int X[i];
    i = 1;
    while (X[i] >= 0 && i <= n)
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
            while (X[i] >= 0 && i <= n)
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