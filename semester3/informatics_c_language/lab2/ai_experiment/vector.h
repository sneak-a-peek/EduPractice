#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* array;
    int size;

public:
    Vector(int k);
    ~Vector();
    void display();
    int findMax();
    int findMin();
    Vector();
    void sort();
};

#endif