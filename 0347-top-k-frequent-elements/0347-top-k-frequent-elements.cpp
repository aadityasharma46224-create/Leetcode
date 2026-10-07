class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int> pi;  // new thing of concept learnt
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        // priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>>pq; or we can do 
        priority_queue<pi , vector<pi>, greater<pi>>pq;
        for(auto i:mp)
        {
            pi fp= {i.second, i.first};
            pq.push(fp);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans;
        while(pq.size()>0)
        {
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};