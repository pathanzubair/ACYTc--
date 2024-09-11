#include <iostream>
using namespace std;

// FUNCTION DEFINITION
int printHello(){
    cout << "HELLO , HI ,HOW R U?" << endl;
    return 4;

}

//  function to calculate sum of two numbers

    int sumOfNum(int a,int b){
        // cout << "Enter value of a: " << endl;
        // cin >> a;
        // cout << "Entre value of b :" << endl;
        // cin >> b; 
        return a+b;
    }

    int sumOfIntegers(int n){
        int sum = 0;
        for(int i = 0; i<=n; i++){
            sum = sum + i;
        }
        return sum;
    }

    int factorial(int num){
        int fact = 1;
        for(int i = 1; i<=num; i++){
            fact = fact * i;
        }
        return fact;
    }

    int binomialCoeff(int n, int r){
        int bin_n = factorial(n);
        int bin_r = factorial(r);
        int bin_n_r = factorial(n-r);

        return bin_n / (bin_r * bin_n_r);
        
    }

    int passByValue(int p1, int p2){
        return p1 + p2;
    }

    int sumOfdigits(int d){
        int sum = 0;
        while(d > 0){ 
            int temp = d % 10;
            sum = sum + temp;
            d = d / 10; 
        }
        return sum;
    }

int main(){

    // printHello();   // direct calling only prints statement not the return value
    // cout << endl;

    // int number = printHello();  // prints both statement and return value
    // cout << "Num = " << number << endl;
    // cout << endl;

    // cout << printHello() << endl;   //  prints both statement and return value

    // cout << sumOfNum(23,22) << endl;

    // int num;
    // cout << "Enter a number: " << endl;
    // cin >> num;
    // cout << "Sum of integers is " << sumOfIntegers(num) << endl; 
    // cout << factorial(4) << endl;
    // cout << factorial(5) << endl;

    // PASS BY VALUE --- COPY OF ARGUMENT IS PASSED TO FUNCTION
    // int p1 = 4; int p2 = 3; // HERE this pair of p1 and p2 is deiffferent from that in the passBYvalue function
    // cout << "Sum = " << passByValue(p1, p2) << endl;

    // int digit;
    // cout << "Enter digits: " << endl;
    // cin >> digit;
    // cout << "the sum of digits is " << sumOfdigits(digit) << endl;

    // CALCULATE BINOMIAL COEFFICIENT
    int r;
    int n;
    cout << "Enter value for n: " << endl;
    cin >> n;
    cout << "Enter value for r: " << endl;
    cin >> r;

    cout << "BINOMIAL = " << binomialCoeff(n,r) << endl;
    // cout << (  factorial(n) / (factorial(r) * factorial(n-1) ) ) << endl;

    cout << "CHAPTER 5 - functions "<< endl;
    return 0;

}