#include <iostream>
using namespace std;

class Power {
    int m,n;
    int ans = 1;

    public:

    // "int b=2" is a default argument
    // This function calculates square when 2nd argument is omitted
    int power(int a, int b=2){
        m = a;
        n = b;
        for(int i=1;i<=n;i++){
            ans *= m;
        }
        return ans;
    }

    // This function display's the answer
    void display(){
        cout << "" << m << " raise to a power " << n << " is: " << ans << endl;
    }
};
int main(){
    Power pow;

    pow.power(2,4);    // here if we pass only first argument, 
                       // because of default argument in the function there will be no error
    pow.display ();

    return 0;
}