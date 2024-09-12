#include <iostream>
using namespace std;

int decimalToBinary(int dec){
    int ans = 0;
    int power = 1;
    while(dec > 0){
        int rem = dec % 2;
        dec /= 2;
        ans += (rem * power);
        power *= 10;

    }
    return ans;
}

int binaryToDecimal(int bin){
    int ans = 0;
    int power = 1;
    while(bin > 0){
        int rem = bin % 10;
        bin  /= 10;
        ans += (rem * power);
        power *= 2;
    }
    return ans;

}
int main(){
    cout << "CHAPTER 6 - Binary Number System";
    cout << endl;
    cout << "CODE FOR DECIMAL TO BINARY CONVERSION" << endl;
    int n1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    for(int i = 0; i<=n1; i++){
        cout << i << " = " << decimalToBinary(i) << endl;
    }
    cout << "Equivalent Binary number = " << decimalToBinary(n1) << endl;

    cout << endl;
    cout << "CODE FOR BINARY TO DECIMAL CONVERSION" << endl;
    int n2;
    cout << "Enter a binary number: " << endl;
    cin >> n2;
    cout << "DECIMAL NUMBER = " << binaryToDecimal(n2) << endl;
    // for(int i = 0; i <= n2; i++){
    //     cout << 
    // }
    return 0;
}