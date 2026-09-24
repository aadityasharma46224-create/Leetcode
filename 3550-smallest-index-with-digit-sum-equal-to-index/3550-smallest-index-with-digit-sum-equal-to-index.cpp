class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int p = nums[i];
            int x = 0;
            while(p>0)
            {
                int r = p%10;
                x = x + r;
                p = p/10;
            }
            if(i==x)
            {
                return i;
            }
        }
        return -1;
    }
};