 #ifndef VECTOR_H
 #define VECTOR_H
 
 class Vector {
 private:
    int* array;
    int size;
  
 public:
    Vector(int k);
   ~Vector();
    void print() const;
    int max() const;
    int min() const;
    void sort();
};
  
#endif