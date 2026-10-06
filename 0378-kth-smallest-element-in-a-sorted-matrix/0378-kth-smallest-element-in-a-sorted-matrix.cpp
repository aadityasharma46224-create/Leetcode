class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        priority_queue<int>pq;   // max heap
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(pq.size()<k)
                {
                    pq.push(matrix[i][j]);
                }
                else
                {
                    pq.push(matrix[i][j]);
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};