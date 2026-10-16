class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int>mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp)
        {
            pair p = {i.second, i.first};
            pq.push(p);
        }
        string answer = "";
        while(pq.size()>0)
        {
            int ele = pq.top().first;
            while(ele>0)
            {
                answer += (pq.top().second);
                ele--;
            }
            pq.pop();
        }
        return answer;
    }
};