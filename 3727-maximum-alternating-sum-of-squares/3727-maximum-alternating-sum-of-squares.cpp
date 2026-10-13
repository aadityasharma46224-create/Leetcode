class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            v[i]=abs(nums[i]);
        }
        sort(v.begin(),v.end());
        int i=0; 
        int j=n-1;
        long long ans = 0;
        while(i<j)
        {
            ans = ans + (pow(v[j],2)-pow(v[i],2));
            i++;
            j--;
        }
        if(i==j)
        {
            ans = ans + pow(v[i],2);
        }
        return ans;
    }
};