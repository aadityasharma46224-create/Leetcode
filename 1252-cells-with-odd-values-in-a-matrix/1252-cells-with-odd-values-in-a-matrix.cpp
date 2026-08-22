class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>vv(m, vector<int>(n,0));
        int x = indices.size();
        for(int i=0; i<x; i++)
        {
            int row = indices[i][0];
            int column = indices[i][1];
            for(int i=0; i<n; i++)
            {
                vv[row][i]++;
            }
            for(int i=0; i<m; i++)
            {
                vv[i][column]++;
            }
        }
        int cnt=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((vv[i][j])%2!=0)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};