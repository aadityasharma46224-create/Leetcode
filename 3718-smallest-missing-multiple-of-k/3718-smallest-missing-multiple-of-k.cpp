class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(nums[i]%k==0)
            {
                int x = nums[i]/k;
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for(int i=1; i<=v.size(); i++)
        {
            if(i!=v[i-1])
            {
                return i*k;
            }
        }
        return (v.size()+1)*k;
    }
};