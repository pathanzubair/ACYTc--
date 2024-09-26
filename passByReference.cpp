#include <iostream>
#include <vector>
using namespace std;

void change(int* ptr){  // pass by reference using pointers

    *ptr = 20;
}

void changeByReference(int &b){
    b = 2192;
}
int main(){

     cout << "******** PASS BY REFERENCE ********" << endl;
    // 2 ways --- Pointers
    //        --- references(ALIAS)
    int a = 10;
    cout << "Original value of a = " << a << endl;
    cout << endl;
    
    change(&a);

    cout << "Value of a after "<< a << endl;

    cout << endl;


//  BY using references 
    int c = 10;
    cout << "Original value of a = " << c << endl;
    cout << endl;
    
    changeByReference(c);

    cout << "Value of a after "<< c << endl;
    cout << endl;


    // Explaining pointers using arrays
        // Here array s itself acts as a  pointer and it is a constant pointer and cannot be changed through out the program
    int arr[] = {1,2,3,4,5};
     cout <<"Address of the array's 1st element : "<< arr << endl;
     cout << "1st element of the array: "<<*arr << endl;
    //  arr += 2;
     cout << "3rd element of the array : " << *(arr+3 ) << endl;

     int* arrPtr = arr;
     cout << *(arrPtr + 1) << endl;
     cout << *(arrPtr + 3) << endl;
     arrPtr++;
     cout << *(arrPtr) << endl;

     cout << endl;

     cout << "******* Pointers Arithmetic ********" << endl;

    int num = 18;
    int* ptr2 = &num;

    cout << ptr2 << endl;
    ptr2--;  // ptr2++;               // Here increment / decrement is done on the basis of datatype of the variable e.g if int is there then 4 bytes are incremented or decremented
    cout << ptr2 << endl;

    cout << endl;

    cout << "******** ADDING numbers to the pointers *********" << endl;

   int num6 = 123;
   int* newPtr6 = &num6;
   cout << "Original Pointer value = " << (newPtr6) << endl;
   newPtr6 += 2;
   cout << "Pointer value after addition = " << (newPtr6) << endl;

   cout << endl;
    cout << "**** Subtracting two pointers of same datatypes ****" << endl;
    // except addition we can perform <, > , <= , == ,!= operations on two or more pointers
    int* ptr12;
    int* ptr13 = ptr12 +2;
    cout << "ptr12 = " << ptr12 << endl;
    cout <<"ptr13 = " << ptr13 << endl;
    cout << "SUbtraction of Ptr12 -ptr13 =  " << ptr13- ptr12 <<endl;

    cout << (ptr12 < ptr13) << endl;
    

    return 0;
}