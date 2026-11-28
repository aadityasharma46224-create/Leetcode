class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            st.insert(nums[i]);
        }
        int ans = -1;
        int i=1;
        while(ans==-1)
        {
            if(st.find(i)==st.end())
            {
                ans = i;
                break;
            }
            i++;
        }
        return ans;
    }
};