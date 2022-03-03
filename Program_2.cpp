#include <iostream> 
using namespace std;

// inline function to get square of entered number 
inline int square(int s){
    return s*s;
}
int main(){

    cout << "The square of 7 is: " << square(7) << endl;

    return 0;
}