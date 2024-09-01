#include "vector.cpp"
#include <iostream>

int main() {
    // Demonstrate the functionality of the Vector class
    Vector vec(5); // Create a Vector object with 5 elements
    vec.display(); // Display the elements
    std::cout << "Max element: " << vec.findMax() << std::endl;
    std::cout << "Min element: " << vec.findMin() << std::endl;
    vec.sort();
    vec.display(); // Display the sorted elements

    return 0;
}