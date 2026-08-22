class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int max = -1;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(colors[i]!=colors[j])
                {
                    int x = j-i;
                    if(x>max)
                    {
                        max = x;
                    }
                }
            }
        }
        return max;
    }
};