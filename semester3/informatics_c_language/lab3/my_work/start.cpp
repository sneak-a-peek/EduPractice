#include "start.h"
#include "vector.h"
#include <iostream>

void Start::run() {
    // Использование основного конструктора
    Vector vec(10);
    std::cout << "Элементы массива (созданного основным конструктором): ";
    vec.print();

    std::cout << "Максимальный элемент: " << vec.getMax() << std::endl;
    std::cout << "Минимальный элемент: " << vec.getMin() << std::endl;

    vec.sort();
    std::cout << "Отсортированные элементы массива: ";
    vec.print();

    // Использование конструктора копирования
    Vector vecCopy = vec;
    std::cout << "Элементы массива (созданного конструктором копирования): ";
    vecCopy.print();
}