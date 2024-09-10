#include <iostream>
using namespace std;
int main(){

    cout << "Hi" << endl;

    // 1. SQUARE PATTERN OF NUMBERS + ALPHABETS
    // int sqp;
    // cout << "Enter a number to square pattern: " << endl;
    // cin >> sqp;
    // for(int i = 1; i<=sqp; i++){
        // char ch = 'A';  // NOTE VARIABLES DECLARED HERE WITH VALUE GET RESET AFTER PRINTING A  LINE WHILE THIS DOES NOT HAPPENS IF WDECLARER IT BEFORE OUTER FOR LOOP 
    //     for(int j = 1; j<=sqp; j++){
    //         cout << ch << "";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // 2 . print number pattern with max 3 numbers in one line and continue the series
    // int nc;
    // cout << "Enter a number to print continuous numbers: " << endl;
    // cin >> nc;
    // int count = 1;
    // for(int k = 1; k <=nc; k++){
    //     for(int l = 1; l <= nc; l++){
    //         cout << count << "   ";
    //         count += 1;

    //     }
    //     cout << endl;

    // }

    // 2(A) ABOVE SAME CODE FOR PRINTING CHARACTERS

    // int nc;
    // cout << "Enter a number to print continuous numbers: " << endl;
    // cin >> nc;
    // // int count = 1;
    // char c2 = 'A';
    // for(int k = 1; k <=nc; k++){
    //     for(int l = 1; l <= nc; l++){
    //         cout << c2 << "   ";
    //         c2 += 1;

    //     }
    //     cout << endl;
    // }

    // 3. PRINT LEFT SIDED TRIANGLE PATTERN

    // int ln;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> ln;
    // for(int m = 1; m <= ln; m++){
    //     for(int n = 1; n<=m; n++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

// 3(A) PRINT LEFT SIDED NUMBER PATTERN 
    // int lns;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> lns;
    // for(int m = 1; m <= lns; m++){
    //     for(int n = 1; n<=m; n++){
    //         cout << m << " ";
    //     }
    //     cout << endl;
    // }

// 3(B) PRINT LEFT SIDED ALPHABETS 
    // int ln;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> ln;
    // char cl = 'A';
    // for(int m = 1; m <= ln; m++){
    //     for(int n = 1; n<=m; n++){
    //         cout << cl << " ";
    //     }
    //     cl += 1;
    //     cout << endl;
    // }

//  3(C) PRINT NUMBERS IN LEFT SIDED TRIANGLE PATTERN 
    // int lrn;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> lrn;
    // for(int m = 1; m <= lrn; m++){
    //     int val = 1;
    //     for(int n = 1; n<=m; n++){
    //         cout << val << " ";
    //         val += 1;
    //     }
    //     cout << endl;
    // }

// ANOTHER APPROACH FOR ABOVE SOLUTION

    //  int lrn;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> lrn;
    // for(int m = 1; m <= lrn; m++){
    //     // int val = 1;
    //     for(int n = 1; n<=m; n++){
    //         cout << n << " ";
    //         // val += 1;
    //     }
    //     cout << endl;
    // }

    // 3(D) PRINT NUMBERS IN REVERSE ORDER ON LEFT SIDE

    // int lno;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> lno;
    // for(int m = 1; m <= lno; m++){
    //     // int val = 1;
    //     for(int n = m; n>0; n--){
    //         cout << n << " ";
    //         // val += 1;
    //     }
    //     cout << endl;
    // }

    //  FLYOD's TRIANGLE PATTERN 
    // int frn;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> frn;
    // int fval = 1;
    // for(int m = 1; m <= frn; m++){
    //     // int val = 1;
    //     for(int n = 1; n<=m; n++){
    //         cout << fval << " ";
    //         fval += 1;
    //     }
    //     cout << endl;
    // }

    // 3(E) ALPHABET VERSION OF ABOVE PATTERN
    // int frn;
    // cout << "Enter a number to print left sided triangle: " << endl;
    // cin >> frn;
    // char cfval = 'A';
    // for(int m = 1; m <= frn; m++){
    //     // int val = 1;
    //     for(int n = 1; n<=m; n++){
    //         cout << cfval << " ";
    //             cfval += 1;
    //     }
    //     cout << endl;
    // }

    // 4 INVERTED NUMBER PATTERN 

    int revn;
    cout << "Enter a number: " << endl ;
    cin >> revn;

    for(int i = 0; i < revn; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = 0; k < revn - i; k ++){
            cout << (i+1);
        }
        cout << endl;
    }

    cout << "Hi" << endl;
    return 0;
}