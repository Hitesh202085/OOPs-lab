#include<iostream>
using namespace std;
class Time {
    int hours;
    int minute;
    public:
void setData(int h,int m) {  // function to take input
    hours=h;
    minute=m;
}
void getData(void) {   // function to display output
    cout << "Hours: " << hours << " and ";
    cout << "Minute: " << minute << endl;
}
void sum(Time t1,Time t2) {   // function to add two objects
    minute = t1.minute + t2.minute;
    hours = minute/60;
    minute = minute%60;
    hours = hours + t1.hours + t2.hours;
}
};
int main() {
    Time t1,t2,t3;
    t1.setData(2,30);
    t2.setData(1,45);
    t3.sum(t1,t2);
    cout << endl <<"Time in t1 object = ";t1.getData();
    cout << "Time in t2 object = ";t2.getData();
    cout << endl << "Addition of the both time = ";t3.getData();
    return 0;
} 