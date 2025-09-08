#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = n-2;
        bool tar = true;

        while(tar){
            if(index < 0) break;

            if(nums[index] < nums[index+1]){
                tar = false;
                swap(nums[index-1], nums[n-1]);
            }
        }
        return ;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3,6,5,4};
    s.nextPermutation(arr);

    for(auto x: arr) cout<< x<< " ";
}