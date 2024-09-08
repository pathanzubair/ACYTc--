#include <iostream>

using namespace std;


int main(){
    int age = 18;
    // char grade = 'A';
    // int value = grade;
    // cout << value <<endl;

    // 1.CONVERSION
    // small to big
    cout << "IMPLICIT CONVERSION FROM ONE DATATYPE TO ANOTHER" <<endl;
    int value = 122;
    char grade = value;
    cout << grade << endl;

    // 2. CASTING DONE BY PROGRAMMMER
    // big to small
    cout << "EXPLICIT CONVERSION FROM ONE DATATYPE TO ANOTHER" <<endl;
    double price = 100.8484;
    int newprice = (int)price;
    cout << newprice << endl;
    cout << "Hello" << endl;
    cout << age << endl;

    // string s;
    // cout << "Enter your name:";
    // cin >> s;
    // cout << "Your name is "<< s << endl;


    // OPERATORS

    int a , b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    cout << "Addition: "<< a+b << endl;
    cout << "Subtraction: "<< a-b << endl;
    cout << "Multiplication: "<< a*b << endl;
    cout << "Divion: "<< a/b << endl;
    cout << "Remainder: " << a%b << endl;
    

    // NUMERIC ANSWEWR IN DECIMAL
    // int c = 5;
    // double d = 2;
    // cout << (c/d) << endl;
    cout << (5/(double)2) << endl;


    // RELATIONAL OPERATORS

    cout << (2 == 5) << endl;

    // logical operators

    cout << !( 2 < 5) << endl;

    // EXMPLE PROBLEM SUM OF TWO NUMBERS
    int n1;
    int n2;
    int sum;
    cout << "Enter n1 = " << endl;
    cin >> n1;
    cout << "ENter n2 = " << endl;
    cin >> n2;
    sum = n1 + n2;
    cout << "SUM = " << sum << endl; 


//  UNARY OPERATORA (++ , --)
    int u = 10;

    cout << u++ << endl;
    cout << u;
    // cout << ++u << endl; (11)
    // return 0;
}
