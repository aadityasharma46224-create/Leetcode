class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(auto i : answers)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.first==0)
            {
                ans = ans + i.second;
            }
            else if(i.second>(i.first+1))
            {
                if(i.second%(i.first+1)==0)
                {
                    ans += (i.second/(i.first+1))*(i.first+1);
                }
                else
                {
                    ans += (i.second/(i.first+1))*(i.first+1) + (i.first+1);
                }
            }
            else
            {
                ans = ans + i.first+1;
            }
        }
        return ans;
    }
};