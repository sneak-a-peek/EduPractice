#include "vector.h"
#include <iostream>
#include <algorithm> // для std::sort
#include <ctime> // для функции time
#include <cstdlib> // для функции rand и srand

Vector::Vector(int k) {
    size = k;
    array = new int[size];
    srand(time(0)); // инициализация генератора случайных чисел
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100; // заполнение массива случайными числами от 0 до 99
    }
    std::cout << "Vector создан с размером " << size << std::endl;
}

Vector::Vector(const Vector& other) {
    size = other.size;
    array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = other.array[i];
    }
    std::cout << "Vector создан копированием с размером " << size << std::endl;
}

Vector::~Vector() {
    delete[] array;
    std::cout << "Vector уничтожен" << std::endl;
}

void Vector::print() const {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int Vector::getMax() const {
    int maxVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

int Vector::getMin() const {
    int minVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

void Vector::sort() {
    std::sort(array, array + size);
}
