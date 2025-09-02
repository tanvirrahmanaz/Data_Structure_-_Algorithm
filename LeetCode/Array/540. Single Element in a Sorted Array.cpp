#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() -1;

        while(start <= end){
            int mid = start + (end - start)/2 ;
            
            cout<<"mid "<<nums[mid]<<endl;
            cout<<"index " <<mid<<endl;
            
            if(nums[mid-1]!= nums[mid] && nums[mid+1]!= nums[mid]){
                return nums[mid];
            }

            else if(mid%2 == 0){
                if(nums[mid-1] == nums[mid]){
                    end = mid-1;
                }
                else start = mid+1;
            }
            else{
                if(nums[mid-1] == nums[mid]){
                    start = mid+1;
                }
                else end = mid-1;
            }
        }
        return -1;
    }  
};

int main(){
    Solution sol;
    vector<int> arr = {3,3,7,7,10,11,11};
    int result = sol.singleNonDuplicate(arr);

    cout<< result<< endl;
}