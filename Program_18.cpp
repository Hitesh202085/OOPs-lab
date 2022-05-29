#include<iostream>
using namespace std;

// Base class
class Animal{
    public:
    virtual void animalSound() {
        cout << "This is a generic Function";
    }
};

// Derived class
class Dog : public Animal {
    public:
    void animalSound() { 
        cout << "Woof" << endl;
    }
};

int main(){
   Animal *obj;
   obj = new Dog();
   obj->animalSound();
   return 0;
}