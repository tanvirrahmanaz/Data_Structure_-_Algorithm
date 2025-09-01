#include <iostream>
using namespace std;

class Solution{
    public:
    int peakIndexInMountainArray(int* arr, int arrSize) {
        int start = 0;
        int max = arr[0];
        int min = arr[0];
        int index = 0;


        







        
        // for(int i=0; i<arrSize; i++){
        //     if(arr[i] >= max){
        //         max = arr[i];
        //         index = i;
        //     }
        // }
        // cout<<"index "<<index<<endl;
        // cout<<"max "<<max<<endl;
        return index;
    }
};

int main(){
    Solution sol;
    int arr[] = {0,13,15,2};
    int result = sol.peakIndexInMountainArray(arr, 4);
    cout << result << endl; // Output: 1
    return 0;

}