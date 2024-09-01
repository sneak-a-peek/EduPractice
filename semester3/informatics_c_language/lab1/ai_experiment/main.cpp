#include "vector.h"
#include "vector.cpp"
#include <iostream>

int main() {
    Vector v(10);
    std::cout << "Массив: ";
    v.print(); // print initial values
    std::cout << "Максимальное значение массива: " << v.getMax() << std::endl;
    std::cout << "Минимальное значение массива: " << v.getMin() << std::endl;
    v.sort();
    std::cout << "Отсортированные по возрастанию элементы массива: ";
    v.print(); // print sorted values
    return 0;
}