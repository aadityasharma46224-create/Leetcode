class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        stack<int>st;
        st.push(INT_MAX);
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int max = 0;
            int min = INT_MAX;
            for(int j=0; j<=i; j++)
            {
                if(nums[j]>max)
                {
                    max = nums[j];
                }
            }
            for(int q=i; q<n; q++)
            {
                if(nums[q]<min)
                {
                    min = nums[q];
                }
            }
            int p = max-min;
            if(p<=k)
            {
                return i;
            }
        }
        return -1;
    }
};