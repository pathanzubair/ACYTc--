#include <iostream>
#include <vector>
using namespace std;




int bSReceursive(vector<int> arr, int target, int start , int end ){

    int mid = start + ((end - start)/2);

    if(start > end){
        return -1;
    }

    if(target < arr[mid]){
        return bSReceursive(arr, target , start , mid-1);
    }
    else if(target > arr[mid]){
        return bSReceursive(arr, target, mid+1, end);
    }
    else{
        return mid;
    }

}
int main(){

    cout << "Binary Search Recursive Program" << endl;

    vector<int> arr = {-1,0,1,2,3,4,5,6,7,8,9};
    
    int target ;
    cout << "Enter the target Value: " << endl;
    cin >> target;

    int start = 0;
    int end = arr.size()-1;

    cout << "The index of " << target << " element = " << bSReceursive(arr, target , start , end) << endl;





    cout << endl; 
    return 0;
}