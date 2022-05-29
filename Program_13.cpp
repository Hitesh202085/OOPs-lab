#include <iostream>
using namespace std;
class Base { //single base class
 	public:
 	int x;
 	void getdata() {
    	cout << "Enter value of x= "; cin >> x;
 	}
};
class Derive1 : public Base { // derived class from base class
 	public:
 	int y;
 	void readdata() {
 	    cout << "\nEnter value of y= "; cin >> y;
 	}
};
class Derive2 : public Derive1 { // derived from class derive1
 	private:
 	int z;
 	public:
 	void indata() {
    	cout << "\nEnter value of z= "; cin >> z;
 	}
 	void product() {
 	    cout << "\nProduct= " << x * y * z << endl;
 	}
};
int main() {
    Derive2 a;      //object of derived class
    a.getdata();
    a.readdata();
    a.indata();
    a.product();
    return 0;
} 