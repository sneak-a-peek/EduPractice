#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int size;
    int index = 0;
    // Создание массива при помощи псевдо-генератора случайных чисел
    printf("Введите размер массива: ");
    scanf("%d", &size);
    int randArray[size], i;
    for (i = 0; i < size; i++)
        randArray[i] = rand()%10;

    // Вывод элементов массива
    for (i = 0; i < size; i++)
    {
        printf("\nНомер элемента %d: %d\n", i + 1, randArray[i]);
    }

    // Поиск максимального значения
    for (i = 0; i < size; i++)
        if (randArray[i] > randArray[index])
        index = i;
        int max_value =randArray[index];
        int max_address = index + 1;
    printf("Максимальное значение находится в индексе %d и равно %d.\n", max_address, max_value);    
    for (i = 0; i < size; i++)
        if (randArray[i] < randArray[index])
        index = i;
        int min_value =randArray[index];
        int min_address = index + 1;
    printf("Минимальное значение находится в индексе %d и равно %d.\n", min_address, min_value);
    int min_max_average = (min_value + max_value) / 2;
    printf("%d\n", min_max_average);
    // Поиск минимального значения
    return 0;
}
