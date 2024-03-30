#include <iostream>
using namespace std;
class Vector2D {
private:
    double i;
    double j;

public:
    Vector2D(double i_val, double j_val) : i(i_val), j(j_val) {}

    // Overloading the addition operator (+)  
    friend Vector2D operator+(const Vector2D& v1, const Vector2D& v2);

    // Overloading the subtraction operator (-) 
    friend Vector2D operator-(const Vector2D& v1, const Vector2D& v2);


    void display() const {
        cout << "(" << i << ", " << j << ")" << endl;
    }
};

// Definition of the addition operator (+) using a friend function
Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
    double sum_i = v1.i + v2.i;
    double sum_j = v1.j + v2.j;
    return Vector2D(sum_i, sum_j);
}

// Definition of the addition operator (+) using a friend function
Vector2D operator-(const Vector2D& v1, const Vector2D& v2) {
    double diff_i = v1.i - v2.i;
    double diff_j = v1.j - v2.j;
    return Vector2D(diff_i, diff_j);
}

int main() {
    Vector2D v1(3.0, 4.0);
    Vector2D v2(5.0, 7.0);

    Vector2D sum = v1 + v2;
    Vector2D difference = v1 - v2;

    cout << "Vector v1: ";
    v1.display();
    cout << "Vector v2: ";
    v2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();

    return 0;
}

