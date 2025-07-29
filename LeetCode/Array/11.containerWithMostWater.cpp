class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxw8 = 0;
        int lp = 0 , rp = height.size()-1;

        while(lp < rp){
            int h = min(height[lp], height[rp]);
            int w = rp - lp;

            int area = h* w;

            maxw8 = max(maxw8, area);

            height[lp] < height[rp] ? lp++ : rp--;

        }
        return maxw8;
    }
};