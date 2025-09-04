#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int removeElement(vector<int> &nums, int val){
            int start =0;
            int end = nums.size();
            int k=0;

            for(int i=0; i<nums.size() ; i++){
                if(nums[i] != val){
                    nums[k] = nums[i];
                    k++;
                }
            }
            return k;
        }
};

int main(){
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};

    int val = 2;

    int k = s.removeElement(nums, val);

    cout<< "k "<<k<<endl;

}