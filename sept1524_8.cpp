#include <iostream>
using namespace std;

void pbv(int pass_value[], int sz){
    cout << "Outside main function" << endl;

    for(int i = 0; i<sz; i++){
        pass_value[i] *= pass_value[i];
    }

}


int linearSearch(int ls[],int szl,int target){
    // int szl  = sizeof(ls) / sizeof(int);
    for(int i = 0 ; i < szl; i++){
        if(ls[i] == target){
            return i;
        }
    }
    return -1;
}

    
void reverse_array(int arr[], int length){
    int start = 0;
    int end = length-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    cout << "Chapter 8 - ARRAY Datastructures - Part 1" << endl;
    
// CREATE AN ARRAY
// 1. first way to crate an array
    // int marks[5] = {23,43, 54, 54, 44};
    // cout << marks[4] << endl;

// 2. second way to create an array
    // int marks2[100] ;
    // marks2[0] = 12;
    // marks2[1] = 11;
    // marks2[4] = 23;
    // cout << marks2[2] << endl;
    // cout << marks2[3] << endl;



// TAKE AN USER INPUT IN AN ARRAY
    // int user_array[10];
    // for(int j = 0; j <= sizeof(user_array)/sizeof(int); j++){
    //     cout<< "Enter element " << j << " : " ;
    //     cin >> user_array[j]; 
    // }

    // for(int j = 0; j < sizeof(user_array)/sizeof(int); j++){

    //     cout << "ELement " << j << " : " << user_array[j] << endl;
    // }

    

// PRINT ARRAY ELEMENTS USING LOOPS
    // int marks_len = sizeof(marks);
    // cout << "Size of marks array(i.e number of bits it occupies): " << endl;
    // cout << marks_len << endl << endl;

    // for(int i = 0; i <= (sizeof(marks) / sizeof(int)) ; i++){
    //     cout << "Element at index " << i << " : " << marks[i] << endl;
    // }

// FIND SMALLEST AND LARGEST ELEMENT OF AN ARRAY

    // int numbers[5];
    // for(int i= 0; i<( sizeof(numbers) / sizeof(int) ); i++){
    //     cout << "Enter element " << i << ": " ;
    //     cin >> numbers[i];
    // }

    // int small = INT8_MAX;   // We can use this as temporay infinity value to update further if condition is true
    // int large = numbers[0];

    // for(int j = 1; j < (sizeof(numbers) / sizeof(int) ) ; j++){
    //     if(numbers[j] < small){
    //         small = numbers[j];
    //     }
    //     large = max( numbers[j], large);
    // }

    // for(int j = 1; j < (sizeof(numbers) / sizeof(int) ) ; j++){
    //     large = max( numbers[j], large);  // Pre- defined function to compare values
        
    //     // if(numbers[j] > large){
    //     //     large = numbers[j];
    //     // }
    // }


    // cout << "The smallest number = " << small << endl;
    // cout << "The largest number = " << large << endl;
    
// PASS BY REFERENCE
    // int pass_value[5];
    // int sza = sizeof(pass_value) / sizeof(int); 
    // for(int i = 0; i < ( sizeof(pass_value) / sizeof(int) ); i++){
    //     cout << "Enter element " << i << ": ";
    //     cin >> pass_value[i];
    // }

    // cout << endl;
    // cout << "Original values in the array" << endl;
    // for(int i = 0; i < ( sizeof(pass_value) / sizeof(int) ); i++){
    //     cout << pass_value[i] << endl;
    // }

    // cout << endl;

    // pbv(pass_value,sza);

    // cout << "After calling function--- Updated values are" << endl;

    // for(int i = 0; i < ( sizeof(pass_value) / sizeof(int) ); i++){
    //     cout << pass_value[i] << endl;
    // }

    // int list[6] = {1,43 , 45, 23, 87, 66};
    // int target = 66;
    // int szl  = sizeof(list) / sizeof(int);
    // cout << linearSearch(list, szl, target) << endl; 

    int ra[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(ra)/sizeof(int);
    reverse_array(ra,size);

    cout<<endl;
    for(int i = 0; i<size; i++){
        cout << ra[i] << " ";
    }




    
    
    
    return 0;
}