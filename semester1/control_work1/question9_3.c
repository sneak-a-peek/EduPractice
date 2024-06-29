#include <stdio.h>

int main() {
    int p, m;
    int n = 10;
    int X[n] = { 5, 7, 6, -1, 0, 8, 2, 4, 3, 9 };
    p = 1;
    m = -1;
    int i = 1;
    while (X[i] < 0 || i > n)
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
            while (X[i] < 0 || i > n)
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
