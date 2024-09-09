#include <iostream>
using namespace std;

int main(){

// CONDITIONAL STATEMENTS IN C++

// 1. if-else statement

    // code to check number is positive or neagtive
    // int n;
    // cout << "Enter a number: " << endl;
    // cin >> n;
    // if (n>=0){
    //     cout << n << " is positive" << endl;
    // }
    // else{
    //     cout << n <<" is negative" << endl;
    // }

    // // EVEN ODD CODE
    // if(n%2 == 0){
    //     cout << n << " is even number" << endl;

    // }
    // else{
    //     cout << n << " is odd number" << endl;
    // }


//  2. if - if else -else statement

    int mark;
    cout << "Enter your marks :" << endl;
    cin >> mark;
    if (mark >= 90){
        cout << "GRADE A" << endl;

    }
    else if(mark < 90 && mark >= 80){
        cout << "GRADE B" << endl;
    }

    else{
        cout <<"GRADE C" << endl;
    }


// code to print if the character is upppercase or lowercase

    // char ch;
    // cout << "Enter a character: " << endl;
    // cin >> ch;
    // if (ch >= 'A' && ch <= 'Z'){
    //     cout << ch << " is uppercase" << endl;
    //     }

    // else{
    //     cout << ch << " is lowercase" << endl;
    // }
//      HERE IMPLICIT TYPE CONVERSION IS USED (another approach)
    // if (ch >= 65 && ch <= 90){
    //     cout << ch << " is uppercase" << endl;
    //     }

    // else{
    //     cout << ch << " is lowercase" << endl;
    // }

// TERNARY STATEMENTS (if - else can be reduced to a single line)
    // SYNTAX - (condition? statement_1 : statement_2;)

    // code to check number is even or odd
    // int eo;
    // cout << "Enter a number: " << endl;
    // cin >> eo;
    // cout << (eo % 2 == 0? "even" : "odd") << endl;



// ****************************  WHILE  lOOP  ***************************
//     // print numbers 1 to n
//     int nat;
//     cout << "Enter a number: " << endl;
//     cin >> nat;
//     int i = 1;
//     while(i<=nat){
//         cout << i << endl;
//         i++;
//     }

// // ************************* FOR LOOP ***********************************
// // print natural numbers

//     cout << endl;
//     int fn;
//     cout << "Enter a number: " << endl;
//     cin >> fn;

//     for(int i = 1; i<=fn; i++){
//         cout << i << endl;
//     }

//     //  code to add numbers from 1 to n
//     int sum = 0;
//     int ns;
//     cout << "Enter a number: " << endl;
//     cin >> ns;
//     for(int j = 1; j<=ns; j++){
//         sum += j;
//     }
//     cout << "The sum of "<< ns << " numbers is "<< sum << endl;


//     // sum of odd numbers from 1 to n
    
//     int sumOdd = 0;
//     int so;
//     cout << "Enter a number: " << endl;
//     cin >> so;
//     for(int j = 1; j<=so; j+=2){
//         sumOdd += j;
//     }
//     cout << "The sum of "<< so << " odd numbers is "<< sumOdd << endl;
    
    // ********************* DO- WHILE LOOP ***********************
    // print numbers from 1 to n
    do{
        cout << "TE IT" << endl;

    }while(3>5);
    
    
    // // SUM OF NUMBERS 
    // int dwn;
    // int k = 1;
    // cout << "Enter a number: "; cin >> dwn;
    // int sumDwn = 0;
    // do{
    //     sumDwn += k;
    //     k++;
    // }while(k<=dwn);

    // //  CODE TO CHECK WHETHER A NUMBER IS PRIME OR NOT
    // int pn;
    // cout << "Enter a number: "<< endl;
    // cin >> pn;
    // int l = 2;
    // if(pn == 1){
    //     cout << "1 is neither prime nor composite" << endl;
    // }
    // cout << "THe sum of numbers through DO WHILE LOOP is " << sumDwn << endl;

    // CODE TO CHECK PRIME OR NOT

    bool ans = true;
    int np;
    cout << "Enter a number: " << endl;
    cin >> np;

    for(int l = 2; l<np; l++){
        if(np  % l == 0){
            ans = false;
            break;
        }
    }

    if(ans == true){
        cout << "Prime" << endl;
    }
    else{
        cout << "NOT Prime" << endl;
    }
    
    cout << "Zubair Pathan" << endl;
    return 0;

}