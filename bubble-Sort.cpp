#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        bool isSwap = false;
        for(int j = 0; j < n -i -1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

void printAnswer(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    cout << "*********** Bubble Sort **********" << endl;

    // int arr[] = {4,1,5,2,3};
    int arr[] = {5,4,3,2,1};
    int n = 5;
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printAnswer(arr, n);
    cout << endl; 
    return 0;
}