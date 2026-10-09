class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int window = 0;
        int ans = 0;
        for(int i=0; i<k; i++)
        {
            window = window + arr[i];
        }
        if(window/k>=threshold)
        {
            ans++;
        }
        for(int j=k; j<n; j++)
        {
            window = window - arr[j-k] + arr[j];
            if(window/k>=threshold)
            {
                ans++;
            }
        }
        return ans;
    }
};