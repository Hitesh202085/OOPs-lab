#include <iostream>
using namespace std;

class Professor {
    public:
    int id;
    string name;
    float salary;
Professor (int i, string n, float s) {
    id = i;
    name = n;
    salary = s;
}
void display () {
    cout << id<<" "<<name<<" " << salary<<endl;
}
};

int main(void) {
Professor p1=Professor(1, "Hitesh ", 90000);
Professor p2=Professor(2, "Arjun ", 60000);
p1.display();
p2.display();
return 0;
}