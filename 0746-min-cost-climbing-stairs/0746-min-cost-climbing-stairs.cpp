class Solution {
public:
    int helper(vector<int>&v)
    {
        int n = v.size();
        vector<int>dp(n);
        dp[0]=v[0];
        dp[1]=v[1];
        for(int i=2; i<n; i++)
        {
            dp[i]=min((dp[i-1]+v[i]), (dp[i-2]+v[i]));
        }
        return min(dp[n-1], dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return helper(cost);
    }
};