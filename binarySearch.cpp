#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> arr1, int t){
    int n =   arr1.size();  //sizeof(arr1)/sizeof(int);
    int start = 0;
    int end = n-1;
    while(start <= end){

        int mid = start + (end - start)/2;                        //   mid = (start+end)/2;
        if(t < arr1[mid]){
            end = mid-1;
        }
        else if(t > arr1[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    cout << "******** BINARY SEARCH ALGORITHM ********" << endl;
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9};
    vector<int> arr2 = {0,1,2,3,4,5,6,7,8,9};
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    int target;
    cout << "Enter the target element: " << endl;
    cin >> target;

    cout << "Target element = " << binarySearch(arr1, target);


    cout << endl; 
    return 0;
}