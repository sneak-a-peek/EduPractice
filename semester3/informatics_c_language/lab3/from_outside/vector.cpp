#include "vector.h"
#include <iostream>     // для std::cout
#include <algorithm>    // для std::sort
#include <ctime>        // для функции time
#include <cstdlib>      // для функций rand и srand
#include <stdexcept>    // для std::runtime_error

// Конструктор по умолчанию
Vector::Vector() : size(0), array(nullptr) {
    std::cout << "Vector создан по умолчанию" << std::endl;
}

// Основной конструктор
Vector::Vector(int k) {
    size = k;
    array = new int[size];
    srand(time(0)); // инициализация генератора случайных чисел
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100; // заполнение массива случайными числами от 0 до 99
    }
    std::cout << "Vector создан с размером " << size << std::endl;
}

// Конструктор копирования
Vector::Vector(const Vector& other) {
    size = other.size;
    array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = other.array[i];
    }
    std::cout << "Vector создан копированием с размером " << size << std::endl;
}

// Деструктор
Vector::~Vector() {
    delete[] array;
    std::cout << "Vector уничтожен" << std::endl;
}

// Метод для вывода массива на экран
void Vector::print() const {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// Метод для поиска максимального значения в массиве
int Vector::getMax() const {
    if (size == 0) {
        throw std::runtime_error("Массив пуст");
    }
    int maxVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

// Метод для поиска минимального значения в массиве
int Vector::getMin() const {
    if (size == 0) {
        throw std::runtime_error("Массив пуст");
    }
    int minVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

// Метод для сортировки массива
void Vector::sort() {
    std::sort(array, array + size);
}

// Перегрузка оператора присваивания
Vector& Vector::operator=(const Vector& other) {
    if (this == &other) {
        return *this;
    }
    
    int* newArray = new int[other.size];
    for (int i = 0; i < other.size; i++) {
        newArray[i] = other.array[i];
    }
    
    delete[] array; // освободить старую память
    
    array = newArray;
    size = other.size;
    return *this;
}

// Перегрузка оператора сложения
Vector Vector::operator+(const Vector& other) const {
    int newSize = size > other.size ? size : other.size;
    Vector result(newSize);
    for (int i = 0; i < newSize; i++) {
        if (i < size && i < other.size) {
            result.array[i] = array[i] + other.array[i];
        } else if (i < size) {
            result.array[i] = array[i];
        } else {
            result.array[i] = other.array[i];
        }
    }
    return result;
}

// Перегрузка оператора вычитания
Vector Vector::operator-(const Vector& other) const {
    int newSize = size > other.size ? size : other.size;
    Vector result(newSize);
    for (int i = 0; i < newSize; i++) {
        if (i < size && i < other.size) {
            result.array[i] = array[i] - other.array[i];
        } else if (i < size) {
            result.array[i] = array[i];
        } else {
            result.array[i] = -other.array[i];
        }
    }
    return result;
}
