#include <iostream>
#import <vector>
using namespace std;
int main(){
    cout << "********* KADANE's ALGORITHM **********" << endl;


    cout << "MAXIMUM - Subarray Sum " << endl;

    cout << "1.Brute force approach" << endl;

    int n = 5;
    int arr[] = {1,2,3,4,5};
    int max_sum = INT8_MIN;
    for(int st = 0; st<n; st++){
        int curr_sum = 0;
        for(int end = st; end < n; end++){
            curr_sum += arr[end];
            max_sum = max(curr_sum, max_sum);
            if(curr_sum < 0){
                curr_sum = 0;
            }
            
            // for(int val = st; val <= end; val++){
            //     cout << arr[val];
            // }
            cout << " ";
        }
        cout << endl;
    }
    cout << "MAximum Sum of subarray = " << max_sum << endl;
    return 0;

}




// CODE BLOCK TO IMPROVE SPEED OF C++ CODE OUTPUT

// int speedUp = [] {
//     std::ios::sync_with_stdio(0);
//     std::cin.tie(0);
//     return 0;
// }();

// ********************* KADANE APPROACH TO FIND MAXIMUM SUBARRAY ***********************

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int large_sum = INT_MIN;
//         int continuous_sum = 0;
//         for(int initial : nums){
//             // int continuous_sum = 0;
//             continuous_sum += initial;
//             large_sum = max(continuous_sum, large_sum);
//             if(continuous_sum < 0){
//                 continuous_sum = 0;
//             }            
//         }
//         return large_sum;
//     }
// };
