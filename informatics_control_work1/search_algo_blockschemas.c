#include <stdio.h>

int main() {
    int n = 6;
    int i = 1;
    int m = -1;
    int p = -1;
    int X[n] = {-1, -9, 6, 1, 3, 7};

    while ( X[i] % 2 == 0 || i > n )
        {
            i = i + 1;
        }
    if ( i = n )
        {
            p = i;
        }
    else if ( i < n )
        {
            p = i;
            i = i + 1;
            while ( X[i] % 2 == 0 || i > n)
                {
                    i = i + 1;
                }
            if ( i <= n)
                {
                    m = i;
                }
        
        }
    printf("%d %d\n", p, m);
    
    return 0;
}