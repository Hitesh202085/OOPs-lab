#include<iostream>
using namespace std;

class Point {
    private:
    int x,y;
    public:
    Point(int x1, int y1) { // parameterized constructor
        x = x1; 
        y = y1;
    }
    Point(int x1){    // constructor overloaded
        x = x1;
        y = 0;
    }
    Point(const Point &p1) {   // copy constructor
        x = p1.x; 
        y = p1.y;
    }

    int getx()  {return x;}
    int gety()  {return y;}
};
int main() {
    Point p1(10,15);      // Normal constructor is called
    Point p2 = p1;        // copy constructor is called
    cout << endl;
    cout<<"p1.x = " <<p1.getx()<< ", p1.y = " <<p1.gety()<<endl;
    cout<<"p1.x = " <<p1.getx()<< ", p1.y = " <<p1.gety()<<endl;

    return 0;
}