#include "start.h"
#include "vector.h"
#include <iostream>

void Start::run() {
    // Использование основного конструктора
    Vector vec1(10);
    Vector vec2(10);
    std::cout << "Элементы первого массива: ";
    vec1.print();
    std::cout << "Элементы второго массива: ";
    vec2.print();

    // Использование оператора присваивания
    Vector vec3 = vec1;
    std::cout << "Элементы массива после присваивания: ";
    vec3.print();

    // Использование оператора сложения
    Vector vec4 = vec1 + vec2;
    std::cout << "Элементы массива после сложения: ";
    vec4.print();

    // Использование оператора вычитания
    Vector vec5 = vec1 - vec2;
    std::cout << "Элементы массива после вычитания: ";
    vec5.print();
}
