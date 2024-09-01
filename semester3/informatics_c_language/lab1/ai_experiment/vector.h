#ifndef VECTOR_H
#define VECTOR_H

// Создание класса
class Vector {
private:
    int* data; // Указатель для хранения массива
    int size; // Указатель для задания размера массива

public:
    Vector(int k);
    ~Vector();
    void print();
    int getMax();
    int getMin();
    void sort();
};

#endif