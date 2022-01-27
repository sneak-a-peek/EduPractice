#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float x, y;
        scanf("%f%f", &x, &y);
        if ((x + 1) * (x + 1) + y * y <= 4 && (y >= -x + 1 || y >= x + 3 || y <= x - 1 || y <= -x - 3))
            printf("Принадлежит\n");
        else printf("Не принадлежит\n");
    return 0;
}
