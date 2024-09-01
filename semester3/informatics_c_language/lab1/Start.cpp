#include "Start.h"
#include "Vector.h"
#include <iostream>

void Start::run() {
    Vector vec(10);
    std::cout << "Элементы массива: ";
    vec.print();

    std::cout << "Максимальный элемент: " << vec.max() << std::endl;
    std::cout << "Минимальный элемент: " << vec.min() << std::endl;

    vec.sort();
    std::cout << "Отсортированные элементы массива: ";
    vec.print();
}