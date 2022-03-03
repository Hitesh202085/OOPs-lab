#include <iostream>
using namespace std;

// using preprocessor
#define m 3
#define n 3
class Matrix {
    int arr[m][n];
    
    public:
    
    // function to read matrix
    void setMatrix (){
        cout << "Enter the elements of matrix" << endl;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout << "Enter the value of arr[" <<i << "][" <<j << "]" << endl;
                cin >> arr[i][j];
            }
        }
    }
    
    // function to display matrix
    void displayMatrix (){
        cout << "The matrix is: " << endl;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int  main(){

    Matrix m1;                       // creating object
    m1.setMatrix();
    m1.displayMatrix();

    return 0;
}