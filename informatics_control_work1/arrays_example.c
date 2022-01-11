#include <stdio.h>

int main() {
    int row = 4;
    int column = 4;
    int MyArray[row][column]; // массив из row строк и column столбцов
    int i, j;
    // Ввод элементов массива
    for (i = 0; i < row; i++) // Цикл по строкам
    {
        for (j = 0; j < column; j++) // Цикл по столбцам
            {
                printf("MyArray[%d][%d] = ", i, j);
                scanf("%d", &MyArray[i][j]);
            }
    }
    // Вывод элементов массива
    for (i = 0; i < row; i++) // Цикл по строкам
    {
        for (j = 0; j < column; j++) // Цикл по столбцам
        {
            printf("%d ", MyArray[i][j]);
        }
        printf("\n"); // Перевод на новую строку
    }
    getchar(); getchar();
    return 0;
}