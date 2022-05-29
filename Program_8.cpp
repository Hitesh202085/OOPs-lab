#include<iostream>
using namespace std;
class DB;
class DM {
    private:
    double met,centimeter;
    friend void add (DM, DB);    // using friend function concept
    public:
    void setValues (){
        cout << "Enter the distance in meter and centimeter: " << endl;
        cin >> met >> centimeter;
    }
};

class DB {
    private:
    double feet,inches;
    friend void add(DM,DB);    // using friend function concept
    public: 
    void setValues (){
        cout << "Enter the distance in feet and inches: " << endl;
        cin >> feet >> inches;
    }
};

void add(DM dm,DB db)
{
double d1,d2;
d1=dm.met+(db.feet)/3.28;
d2=dm.centimeter+(db.inches)*2.54;
cout << endl << "Meter + Feet = "<<d1<<" meter" << endl;
cout << "Centimeter + inches = "<<d2<<" centimeter" << endl;
}

int main() {
DM dm;
DB db;
dm.setValues();
db.setValues();
add(dm,db);
return 0;
}