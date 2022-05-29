#include <iostream>
using namespace std;
class complex {
    int real, img;

    public:
    void getData() {                 // This function takes input
        cout << "Enter the value of real and imaginary part : " << endl; 
        cin >> real >> img;
    }

    complex operator+(complex obj) { // overaloded operator function +
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return (temp);
    }

    complex operator-(complex obj) { // overaloded operator function -
        complex t;
        t.real = real - obj.real;
        t.img = img - obj.img;
        return (t);
    }

    void display() {               // function to display output
        cout << real << "+" << img << "i" << endl;
    }
};

int main() {
    complex obj1, obj2, result, result1;
    obj1.getData();
    obj2.getData();

    result = obj1 + obj2;
    result1 = obj1 - obj2;

    cout << endl << "Input Values: " << endl;
    obj1.display();
    obj2.display();

    cout << endl << "Result: " << endl;
    result.display();
    result1.display();

    return 0;
}