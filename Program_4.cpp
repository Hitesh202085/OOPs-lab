#include <iostream>
using namespace std;

class Power {
    int m,n;

    public:
    
    // This function calculates power (m^n)
    int power(int a, int b){
        m = a;
        n = b;
        int ans = 1;
        for(int i=1;i<=n;i++){
            ans *= m;
        }
        return ans;
    }

    // This function is an alternative of default argument
    // if only one argument is given in function call then this function will run
    int power (int a){
        m = a;
        n = 2;
        int ans = 1;
        for (int i=1;i<=n;i++){
            ans *= m;
        }
        return ans;
    }

    // This function display's the answer
    void display(int ans){
        cout << "" << m << " raise to a power " << n << " is: " << ans << endl;
    }
};
int main(){
    Power pow;
    int result;

    result = pow.power(3,4);
    pow.display(result);          // Here if we only give one argument then 
                                  // the function with one parameter { power(int a) } will run
                                  // this concept is called function overloading
    result = pow.power(3);
    pow.display (result);

    return 0;
}