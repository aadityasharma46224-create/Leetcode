class Solution {
public:
    int rev(int p)
    {
        int x = 0;
        while(p>0)
        {
            int r = p%10;
            x = x*10 + r;
            p = p/10;
        }
        return x;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        for(int i=0; i<n; i++)
        {
            s.insert(rev(nums[i]));
        }
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        return s.size();
    }
};