class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>ans;
        for(int i=0; i<m; i++)
        {
            int max = -1;
            for(int j=n-1; j>=0; j--)
            {
                if(nums2[j]>nums1[i])
                {
                    max = nums2[j];
                }
                else if(nums1[i]==nums2[j])
                {
                    ans.push_back(max);
                }
            }
        }
        return ans;
    }
};