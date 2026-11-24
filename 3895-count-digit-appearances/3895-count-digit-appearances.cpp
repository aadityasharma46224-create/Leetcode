class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int x = nums[i];
            while(x>0)
            {
                if(x%10 == digit)
                {
                    ans++;
                }
                x = x/10;
            }
        }
        return ans;
    }
};