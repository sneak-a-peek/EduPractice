#include "Vector.h"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

Vector::Vector(int k) {
    size = k;
    array = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

Vector::~Vector() {
    delete[] array;
}

void Vector::print() const {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int Vector::max() const {
    int maxVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

int Vector::min() const {
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
