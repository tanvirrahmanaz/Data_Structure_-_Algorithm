#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n ; i++){
        cin>> arr[i];
    }


    

    int max_sum = INT_MIN; // Initialize to the smallest possible integer
    int current_sum = 0;

    for(int i=0; i<n; i++){

        current_sum = current_sum + arr[i];

        max_sum = max(max_sum , current_sum);

        if(current_sum < 0){
            current_sum = 0; // Reset current sum if it becomes negative
        }
    }

    cout << max_sum << endl; // Output the maximum subarray sum
    return 0;
}