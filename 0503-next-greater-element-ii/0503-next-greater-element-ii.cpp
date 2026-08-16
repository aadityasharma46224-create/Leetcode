class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        stack<int>st;
        st.push(nums[n-1]);
        for(int i=0; i<n; i++)
        {
            bool found = false;
            int j=i;
            int k=0;
            while(k<n)
            {
                if(nums[j]>nums[i])
                {
                    ans[i]=nums[j];
                    found  = true;
                    break;
                }
                k++;
                j++;
                if(j==n)
                {
                    j=0;
                }
            }
            if(found==false)
            {
                ans[i]=-1;
            }
        }
        // for(int i=n-2; i>=0; i--)
        // {
        //     while(!st.empty() && st.top()<=nums[i])
        //     {
        //         st.pop();
        //     }
        //     if(st.empty())
        //     {
        //         ans[i]=-1;
        //     }
        //     else
        //     {
        //         ans[i]=st.top();
        //     }
        //     st.push(nums[i]);
        // }
        return ans;
    }
};