#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* array; // указатель на массив
    int size; // размер массива

public:
    Vector(int k); // конструктор
    Vector(const Vector& other); // конструктор копирования
    ~Vector(); // деструктор
    void print() const; // вывод элементов массива
    int getMax() const; // поиск максимального значения
    int getMin() const; // поиск минимального значения
    void sort(); // сортировка массива
};

#endif