#include <iostream>
using namespace std;
int main() {


    class Solution {
public:
    bool isPalindrome(int x) {
        int i=x,rem=0,result=0 ;

        if(x < 0){  
            return false;
        }
        else{
            while(x != 0){
                result = result * 10 + x % 10;
                rem = x%10;
                
                x = x/10;
                cout<<result<<endl;
            }
            if(result == i){
                return true;
            }
            else{
                return false;
            }
        }
    }
};



    Solution sol;
    int x = 121; // Example input
    bool result = sol.isPalindrome(x);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}

