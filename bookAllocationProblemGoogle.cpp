#include <iostream>
#include <vector>
using namespace std;

bool Valid(vector<int> &arr, int n , int m , int currentMaxPages){
    int student = 1;
    int pages = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] > currentMaxPages){
            return false;
        }
        if(pages + arr[i] <= currentMaxPages){
            pages += arr[i];
        }
        else{
            student += 1;
            pages = arr[i];
        }
    }
    return student > m ? false : true;

}

int allocateBooks(vector<int> & arr, int n, int m){
    if( m > n){
        return -1;
    }

    int ans = -1;
    int sum = 0;
    for(int  i = 0; i < n; i++){    //O(n)
        sum += arr[i];
    }
    int start = 0, end = sum;
    while(start <= end){            // O( log(n)*n )

        int mid = start + (end - start)/2;
        if(Valid(arr, n , m , mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid +1;

        }
    }

    return ans;


}


int main(){

    vector<int> arr = {2,1,3,4};
    int n = 4 , m= 2;

    cout << allocateBooks(arr, n, m) << endl;

    cout << endl; 
    return 0;
}