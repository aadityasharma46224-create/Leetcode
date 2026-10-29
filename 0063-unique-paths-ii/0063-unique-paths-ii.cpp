class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1)
        {
            return 0;
        }
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>v(m,vector<int>(n,1));
        bool found = false;
        for(int j=0; j<n; j++)
        {
            if(obstacleGrid[0][j]==1)
            {
                found = true;
            }
            if(found==true)
            {
                v[0][j]=0;
            }
        }
        bool foundcol = false;
        for(int i=0; i<m; i++)
        {
            if(obstacleGrid[i][0]==1)
            {
                foundcol = true;
            }
            if(foundcol==true)
            {
                v[i][0]=0;
            }
        }
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    v[i][j]=0;
                }
            }
        }
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(v[i][j]!=0)
                {
                    v[i][j]=v[i-1][j]+v[i][j-1];
                }
            }
        }
        return v[m-1][n-1];
    }
};