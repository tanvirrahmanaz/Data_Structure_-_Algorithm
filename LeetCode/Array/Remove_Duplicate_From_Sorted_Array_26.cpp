#include<iostream>
#include<vector>
using namespace std;

// class Solution {
//     public:
//     int removeDuplicates(vector<int>& nums){
        
//         if(nums.size() == 0 ) return 0;

//         for(int i=0; i<nums.size()-1 ; i++){
//             if(nums[i] == nums[i+1]){
//                 nums.erase(nums.begin() + i);
//                 i--;
//             }
//         }

//         return nums.size();

//     }
// };



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int res = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};


int main(){
    Solution sol;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n ; i++){
        cin>> nums[i];
    }

    int result = sol.removeDuplicates(nums);

    cout << "The size of the array after removing duplicates is: " << result << endl;
    cout << "The modified array is: ";
    for(int i=0; i<result ; i++){
        cout << nums[i] << " ";
    }
}
   