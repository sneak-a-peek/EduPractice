#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 
В одномерном массиве, состоящем из N целых элементов, вычислить:
A) количество элементов массива, больших по значению, чем среднее арифметическое максимального и минимального элементов;
Б) произведение элементов массива, расположенных между первым и последним отрицательными элементами; 
В) количество чётных элементов, значения которых вошли в интервал [a, b], значения a, b задавать с клавиатуры;

*/
int main(int argc, char* argv[])
{
    int size;
    int index = 0;

    // Создание массива при помощи псевдо-генератора случайных чисел
    printf("Введите размер массива: ");
    scanf("%d", &size);
    int randArray[size], counter;
    for (counter = 0; counter < size; counter++)
        randArray[counter] = rand()%100;

    // Вывод элементов массива
    for (counter = 0; counter < size; counter++)
    {
        printf("Номер элемента %d: %d\n", counter + 1, randArray[counter]);
    }

    // Поиск минимального значения
    for (counter = 0; counter < size; counter++)
        if (randArray[counter] < randArray[index])
            index = counter;
            int min_value =randArray[index];
            int min_address = index + 1;
    printf("Минимальное значение находится в индексе %d и равно %d.\n", min_address, min_value);

    // Поиск максимального значения
    for (counter = 0; counter < size; counter++)
        if (randArray[counter] > randArray[index])
            index = counter;
            int max_value = randArray[index];
            int max_address = index + 1;
    printf("Максимальное значение находится в индексе %d и равно %d.\n", max_address, max_value);    

    // Поиск среднего арифметического
    int min_max_average = (min_value + max_value) / 2;
    printf("Среднее арифметическое от суммы минимального и максимального значений: %d\n", min_max_average);

    // Количество элементов массива больших по значению, чем среднее арифметическое максимального и минимального элементов
    //int* newArray = (int *)malloc(sizeof(int)*size + 1); 
    //for (counter = 0; counter < size; counter++) 
    //   if (randArray[counter] > min_max_average)
    //        printf("%d больше чем %d\n", randArray[counter], min_max_average);
    //        // TODO Как добавить все подходящие элементы в новый массив?
    //        newArray
    //       printf("%d\n", newArray[3]);

    return 0;
}
