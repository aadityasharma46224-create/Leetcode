class Solution {
public:
    static bool cmp(vector<int>& p1, vector<int>& p2)
    {
        return p1[1] > p2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(), cmp);
        int n = boxTypes.size();
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(boxTypes[i][0]<truckSize)
            {
                ans += boxTypes[i][1]*boxTypes[i][0];
                truckSize -= boxTypes[i][0];
            }
            else
            {
                ans += boxTypes[i][1]*truckSize;
                truckSize =0;
                break;
            }
        }
        return ans;
    }
};