#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while(start <= end){
            
            int mid = start + (end - start)/2;
            
            if(arr[mid-1] < arr[mid] && arr[mid]> arr[mid+1]){
                return mid;
            }

            else if(arr[mid+1] > arr[mid]){
                start = mid +1 ;
            }
            else{
                end = mid-1;
            }
 
        }

        // for(int i = 1; i <= end; i++){
        //     if(arr[i] > maxVal){
        //         maxVal = arr[i];
        //         index = i;
        //     }
        // }

        // cout << "index " << index << endl;
        // cout << "max " << maxVal << endl;

        
    }
};

int main(){
    Solution sol;
    vector<int> arr = {0, 13, 15, 2};  // vector দিয়ে ডিক্লেয়ার
    int result = sol.peakIndexInMountainArray(arr);
    cout << result << endl; // Output: 2
    return 0;
}
