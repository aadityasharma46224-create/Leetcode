class Solution {
    vector<int> merge(vector<int>a, vector<int>b)
    {
        int m = a.size();
        int n = b.size();
        vector<int>ans;
        for(int i=0; i<m; i++)
        {
            ans.push_back(a[i]);
        }
        for(int i=0; i<n; i++)
        {
            ans.push_back(b[i]);
        }
        return ans;
    }
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        {
            return nums;
        }
        vector<int>v1;
        vector<int>v2;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                v1.push_back(nums[i]);
            }
            else if(i==1)
            {
                v2.push_back(nums[i]);
            }
            else
            {
                if(v1[v1.size()-1]>v2[v2.size()-1])
                {
                    v1.push_back(nums[i]);
                }
                else
                {
                    v2.push_back(nums[i]);
                }
            }
        }
        vector<int>result;
        result = merge(v1,v2);
        return result;
    }
};