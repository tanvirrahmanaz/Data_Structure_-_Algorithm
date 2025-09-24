#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        reverse(s.begin(), s.end());
        int n = s.length();
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            string word = "";

            while (i < n && s[i] != ' ')
            {
                word = word + s[i];
                i++;
            }
            reverse(word.begin(), word.end());

            // ans এ যোগ করা
            if (!ans.empty()) ans += " ";
            ans += word;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string result = s.reverseWords("the sky is blue");

    cout << result;
}