#include <iostream>

class MyClass {

    int data;

public:
    MyClass(int i) : data(i) {}

    
    void displayData();   // Declaration of member function
};


void MyClass::displayData() { /// Definition of member function outside the class
    std::cout << "Data: " << data << std::endl;
}

int main() {
    MyClass obj(5);
    obj.displayData();

    return 0;
}

