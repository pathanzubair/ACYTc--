#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout << "************** POINTERS ******************" << endl;

    int num;
    num = 12;
    int* ptr = &num;

    float num2 = 123.45;
    float* ptr2 = &num2;
    cout << &num << endl;

    cout << endl;

    cout << ptr << endl;
    cout << &ptr << endl;

    cout << "ADDRESS OF FLOAT VARIABLE" << endl;
    cout << ptr2 << endl;
    cout << &num2 << endl;

    cout << endl;
    cout << "#### POINTER TO POINTER ####" << endl;
    int ptp = 12345;
    int* ptr3 = &ptp;  // pointer storing address of int variable 12345
    int** ptr4 = &ptr3; // pointer to pointer storing address of ptr3 pointer

    cout << "Integer Variable(ptp) : " << ptp << endl;
    cout << "Adress of Integer Variable(ptr3) : "<< ptr3 << endl;
    cout << "Address of Pointer Variable(ptr3) : " << ptr4 << endl;

    cout << "Directly accessing the address of pointer (ptr3): " << &ptr3 << endl;

    cout << endl; 

    cout << "******** Derefrencing Operator(*) ********" << endl;
    // It is used to get the value stored at the address

    int num5 = 876;
    int* ptr5 = &num5;
    int** parentPointer = &ptr5;
    cout << *(&num5) << endl;
    cout << *(ptr5) << endl;
    cout << **(parentPointer) << endl;

    cout << endl;

    cout << "******** NULL POINTER ********" << endl;
    int** ptr6 = NULL;
    cout << ptr6 << endl;
    return 0;

}