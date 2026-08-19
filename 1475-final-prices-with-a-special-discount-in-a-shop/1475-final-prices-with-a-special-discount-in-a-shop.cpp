class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        int i=0; 
        int j = i+1;
        vector<int>ans;
        while(i<n && j<n)
        {
            if(j==n-1)
            {
                if(prices[j]<=prices[i])
                {
                    int x = prices[i]-prices[j];
                    ans.push_back(x);
                    i++;
                    j = i+1;
                }
                else
                {
                    ans.push_back(prices[i]);
                    i++;
                    j = i+1;
                } 
            }
            else if((prices[j]<=prices[i]) && (j>i))
            {
                int x = prices[i]-prices[j];
                ans.push_back(x);
                i++;
                j = i+1;
            }
            else
            {
                j++;
            }
        }
        ans.push_back(prices[n-1]);
        return ans;
    }
};