#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<string>
using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        int pivot = -1, n = nums.size();
        int run = tgamma(n + 1);
        vector<vector<int>> arr;

        arr.push_back(nums);

        for (int i = 0; i < run; i++)
        {

            for (int i = n - 2; i >= 0; i--)
            {
                if (nums[i] < nums[i + 1])
                {
                    pivot = i;
                    break;
                }
            }
            

            for (int i = n - 1; i >= pivot; i--)
            {
                if (nums[i] > nums[pivot])
                {
                    swap(nums[i], nums[pivot]);
                    break;
                }
            }

            reverse(nums.begin()+pivot+1, nums.end());

            arr.push_back(nums);
        }
        return arr;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3};
    
    
    auto all = s.permute(arr);

    for (auto &v : all) {
        for (int x : v) cout << x << ' ';
        cout << '\n';
    }
}