#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    bool check(int *freq1, int *freq2)
    {
        bool result;
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2)
    {

        int freq[26] = {0};
        for (int i = 0; i < s1.size(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        for (int i = 0; i < s2.size(); i++)
        {

            int freqs2[26] = {0};

            for (int j = i; j < i + s1.size() && j < s2.size(); j++)
            {
                freqs2[s2[j] - 'a']++;
            }
            if (check(freq, freqs2))
                return true;
        }
        return false;
    }
};

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    Solution s;
    bool result = s.checkInclusion(s1, s2);

    cout << "result: " << result;
}
