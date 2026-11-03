class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=n-2; i>=0; i--)
        {
            ans += nums[n-1]-nums[i];
        }
        return ans;
    }
};