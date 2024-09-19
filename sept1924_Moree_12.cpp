#include <iostream>
#include <vector>
// #include <array>
#include <algorithm>

using namespace std;


// vector<int> pairSum(vector<int> vec, int target){
    
   
//     int n = vec.size();
//     vector<int> ans;
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j < n ; j++){
//             if (vec[i] + vec[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
                
                
//             }
//         }
//     }
//     return ans;
// }


// vector<int> pairSum_Pointer_approach(vector<int> nums, int target){
//     int start = 0;
//     int end = nums.size() - 1;
//     vector<int> ans;
//     while(start < end){
//         if( nums[start] + nums[end] == target){
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;
//         }
//         else if(nums[start] + nums[end] < target){
//             start++;
//         }
//         else{
//             end--;
//         }
//     }
//     return ans;
// }


// vector<int> majorityElementBruteForce(vector<int> nums2, int n){
//     int time = n/2;
    
//     for(int val: nums2){
//         int frequency = 0;
//         for(int element : nums2){
//             if(element == val){
//                 frequency++;
//             }
//         }
//         if(frequency > time){
//             return {val};
//         }
//     }
//     return {};
// }

// OPTIMIZED APPROACH OF MAJORITY ELEMENT
    vector<int> majorityElementOptimizedApproach(vector<int> nums2, int n){
        int frequency = 1;
        int ans = nums2[0];
        sort(nums2.begin(), nums2.end());

        for(int soni = 1; soni < n; soni++){
            if(nums2[soni] == nums2[soni-1]){
                frequency++;
            }
            else{
                frequency = 1;
            }
            if(frequency > n/2){
                return {nums2[soni]};
            }
        }
        return {ans}; 

    }

//  MOORE MOST OPTIMIZED APPROACH
        int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int answer = 0;
        int frequency = 0;
        for(int i = 0 ; i<n; i++){
            if(frequency == 0){
                answer = nums[i];
            }
            if(answer == nums[i]){
                frequency++;
            }
            else{
                frequency--;
            }
        }
         return answer;
          }
        
int main(){

    cout <<"********** PAIR AND MAJORITY ELEMENT ***********" << endl; 

// 1. PAIR SUM PROBLEM SOLUTION FOR SORTED ARRAY
    // vector<int> vec = {2,7,11,15};
    // int target = 26;

    // vector<int> ans = pairSum_Pointer_approach(vec, target);
    // cout << ans[0] << ", " << ans[1] << endl; 
    
// 2.MAJORITY ELEMENT PROBLEM SOLUTION

    vector<int> nums2 = {2,2,2,2,3,3,3,3,1,1,1,2};
    int n =nums2.size();

    // vector<int> ans = majorityElementBruteForce(nums2, n);
    // cout << "["  << ans[0] << "]" << endl;


    vector<int> ans = majorityElementOptimizedApproach(nums2, n);
    cout << ans[0] << endl;





    return 0;
}