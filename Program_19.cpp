#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
const int MAX = 2; 
class Student { 
private: 
    string name; 
    string id; 
public: 
    void addRecord( string name, string id ) { 
        this->name = name;
        this->id = id; 
    } 
    void display() { 
        cout << left << setw(25) << name << setw(15) << id << endl; 
    } 
}; 
int main( void ) { 
    Student s[MAX]; 
    string name, id; 
 
    for( int i=0; i<MAX; i++ ) { 
        cout << "Enter name : ";    getline( cin, name );
        cout << "Enter ID   : ";    getline( cin, id ); 
        s[i].addRecord( name, id ); 
        cout << endl; 
    } 
    cout << left << setw(25) << "NAME" << setw(15) << "ID NUMBER" << endl; 
    for( int i=0; i<MAX; i++ ) 
        s[i].display(); 
} 