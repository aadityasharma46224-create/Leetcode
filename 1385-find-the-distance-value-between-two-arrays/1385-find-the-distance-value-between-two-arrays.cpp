class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size();
        int n = arr2.size();
        int cnt = m;
        sort(arr2.begin(),arr2.end());
        reverse(arr2.begin(), arr2.end());
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(abs(arr1[i]-arr2[j]) <= d)
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};