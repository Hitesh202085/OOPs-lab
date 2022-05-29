#include<iostream>
using namespace std;
class String{
    private:
    char store[100];
    int size;
    public:
    void storestring(char *A,int n){
    for(int i=0;i<n;i++){
        cin >> A[i];
        store[i] = A[i];
    }
    cout<<"string store sucessfully: "<<store<<endl;
    }
    void addstring(char *B, int n){
        int count = 0;
        for(int j=0;j<n;j++){
            cin >> B[j];
        }
        while(store[count] !='\0'){
           size= count++;
        }
        for(int i=0;i<sizeof(B);i++){
            store[size+i+1] =  B[i];
        }

        cout<<"after adding : "<<store<<endl;      
    }
    void equate(char *a,char *b){
        if(a==b){
       cout << "Yes they are equal " << endl;
        }
        else{
       cout << "No they are not equal " << endl;
        }
    }
};
int  main() {
    char A[100];
    char B[100];
    int n ;
    String a1;
    cout << endl << "size of string" << endl;
    cin >> n;
    cout << "enter the string \n";
    a1.storestring(A,n);
    cout << "enter second string you want to add \n";
    a1.addstring(B,n);
    a1.equate(A,B);

    return 0;
} 