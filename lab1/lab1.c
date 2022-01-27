#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float x, y;
    scanf("%f%f", &x, &y);
    float square_formula = fabs(x) + fabs(y);
    float circle_formula = pow((x - 1), 2) + pow((y - 1), 2);
    //printf("%f\n", square_formula);
    //printf("%f\n", circle_formula);

    if (square_formula <= 2 && circle_formula <= 2)
        printf("Точка принадлежит заданной области\n");
    else printf("Точка не принадлежит заданной области\n");

    return 0;
}
