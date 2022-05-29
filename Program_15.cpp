#include <iostream>
using namespace std;

class first {
private:
	int num;

public:
	void displayf() {
		cout << "This is first class " << endl;
		cout << "num = " << num << endl;
	}

	int& getnum() {
		return num;
	}
};
class second {    // Container class
	// creating object of first
	first f;

public:
	// constructor
	second() {
		f.getnum() = 20;
		f.displayf();
	}
};
int main() {
	// creating object of second
	second s;
}