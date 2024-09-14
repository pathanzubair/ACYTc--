#include <iostream>
using namespace std;

 int glob_Var = 1234;

void globFun(){
    cout << "inside another function = "<< glob_Var << endl;
    }

int main(){
    
    cout << "CHAPTER 7 - BITWISE OPERATORS" << endl;

    int a = 10;
    int b = 10;
    cout << "BITWISE AND OPERATION: " << (a & b) << endl;
    cout << "BITWISE OR OPERATION: " << (a | b) << endl;
    cout << "BITWISE XOR OPERATION: " << (a ^ b) << endl;
    cout << "BITWISE LEFT  SHIFT OPERATION: " << (a << 2) << endl; // concept :- a << b means (ans = a * 2^b)
    cout << "BITWISE RIGHT SHIFT OPERATION: " << (a >> 1) << endl;// concept :- a >> b means (ans = a/2^b)

    // GLOBAL VARIABLE
    globFun();    
    cout << "inside main function = " << glob_Var << endl;



//  LOCAL VARIABLE EXAMPLE

// 1.
    if(3 < 5){
        int x = 10;
        cout << x << endl;  // here x is a local variable so not accessible outside if statement
    }

    // cout << x << endl;

// 2.
    for (int i = 0; i< 7; i++){

    }
    // cout << i << endl;

// 3.
    {
        int z = 4;
    }
    // cout << z << endl;


    // cout << sd << endl;

// DATATYPE MODIFIERS
cout << endl;
    cout << "Int = "<< sizeof(int) << endl;
    cout << "short = "<< sizeof(short) << endl;
    cout << "long = "<< sizeof(long) << endl;
    cout << "double = "<< sizeof(double) << endl;
    cout << "long long = " << sizeof(long long) << endl;
    cout << "signed int = " << sizeof(signed int) << endl;

    unsigned int ui = -12;
    cout << ui << endl;

// SIGNED INT STORES POSITIVE AS WLL AS NEGATIVE VALUES
    return 0;
}
// 4.
    int fun(int a){
        int sd = 23;
    }
