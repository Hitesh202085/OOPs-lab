#include<iostream>
using namespace std;

class IncreDecre {
        int a, b;
        public:
        void setValues() {       // function to take input
                cout << "Enter Two Numbers : " << endl;
                cin >> a;
                cin >> b;
                cout << endl;
        }
        void operator--() {       // Overload Unary Decrement
                a--;
                b--;
        }
        void operator++() {       // Overload Unary Increment
                a++;
                b++;
        }
        void display() {          // function to display output
                cout<<"A : " << a << endl;
                cout<<"B : " << b << endl;
        }
};

int main() {
    IncreDecre id;
    id.setValues();
    --id;
    cout << "After Decrementing : " << endl;
    id.display();
    ++id;
    ++id;
    cout << endl << "After Incrementing : " << endl;
    id.display();
    return 0;
}