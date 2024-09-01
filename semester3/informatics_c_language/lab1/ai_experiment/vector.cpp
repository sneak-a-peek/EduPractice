#include "vector.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Vector::Vector(int k) {
    size = k;
    data = new int[size];
    srand(time(0)); // Инициализация генератора случайных чисел
    for (int i = 0; i < size; i++) {
        data[i] = rand() % 100; // Генерация случайных чисел
    }
}

// Деструктор класса
Vector::~Vector() {
    delete[] data;
}

// Метод для вывода данных на печать
void Vector::print() {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

// Метод для поиска максимального значения в массиве
int Vector::getMax() {
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

// Метод для поиска минимального значения в массиве
int Vector::getMin() {
    int min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

// Метод сортировки значений в массиве
void Vector::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}