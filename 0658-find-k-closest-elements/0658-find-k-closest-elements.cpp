class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto i:arr)
        {
            int dif = abs(x-i);
            pair<int,int>p = {dif, i};
            pq.push(p);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(pq.size()>0)
        {
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};