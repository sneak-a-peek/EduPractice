#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* array; // указатель на массив
    int size;   // размер массива

public:
    Vector();           // конструктор по умолчанию
    Vector(int k);      // конструктор
    Vector(const Vector& other); // конструктор копирования
    ~Vector();          // деструктор
    void print() const; // вывод элементов массива
    int getMax() const;    // поиск максимального значения
    int getMin() const;    // поиск минимального значения
    void sort();        // сортировка массива

    // Перегрузка операторов
    Vector& operator=(const Vector& other);
    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
};

#endif
