#include "vector.h"
#include <iostream>
#include <cstdlib>

Vector::Vector(int k) {
    array = new int[k];
    size = k;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100; // Fill with random values between 0 and 99
    }
}

Vector::~Vector() {
    delete[] array;
}

void Vector::display() {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int Vector::findMax() {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int Vector::findMin() {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

void Vector::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
