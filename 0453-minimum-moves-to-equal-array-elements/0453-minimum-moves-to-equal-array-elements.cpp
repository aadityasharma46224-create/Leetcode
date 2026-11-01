class Solution {
public:

// bro self done by me  logic is developed on pen and copy so when revise do on that and see 
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=n-1; i>0; i--)
        {
            ans = ans + (nums[i]-nums[0]);
        }
        return ans;
    }
};