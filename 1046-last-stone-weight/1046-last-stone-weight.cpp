class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int>pq;
        for(int i=0; i<n; i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size()>1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(x!=y)
            {
                pq.push(y-x);
            }
        }
        if(pq.size()==0)
        {
            return 0;
        }
        int ans = pq.top();
        return ans;
    }
};