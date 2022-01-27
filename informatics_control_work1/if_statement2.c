#include <stdio.h>
 
int main () {

    int x, y, z;
    scanf ("%d%d%d", &x, &y, &z);
    if (x < y) { if (x < z) if (y < z)
        printf("%d %d %d\n", x, y, z);
    else
        printf("%d %d %d\n", x, z, y);
    }

    if (y < z) { if (y < x) if (z < x)
        printf("%d %d %d\n", y, z, x);
    else
        printf("%d %d %d\n", y, x, z);
    }

    if (z < x) { if (z < y) if (y < x)
        printf("%d %d %d\n", z, y, x);
    else 
        printf("%d %d %d\n", z, x, y);
    }

   return 0;
}
