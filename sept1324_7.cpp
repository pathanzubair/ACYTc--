#include <iostream>
using namespace std;
int main(){
    
    cout << "CHAPTER 7 - BITWISE OPERATORS" << endl;

    int a = 10;
    int b = 10;
    cout << "BITWISE AND OPERATION: " << (a & b) << endl;
    cout << "BITWISE OR OPERATION: " << (a | b) << endl;
    cout << "BITWISE XOR OPERATION: " << (a ^ b) << endl;
    cout << "BITWISE LEFT  SHIFT OPERATION: " << (a << 2) << endl; // concept :- a << b means (ans = a * 2^b)
    cout << "BITWISE RIGHT SHIFT OPERATION: " << (a >> 1) << endl;// concept :- a >> b means (ans = a/2^b)
    return 0;
}