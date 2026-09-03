class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // int n = arr.size();
        // vector<int>v;
        // sort(arr.begin(), arr.end());
        // int cnt=1;
        // for(int i=0; i<n-1; i++)
        // {
        //     if(arr[i]==arr[i+1])
        //     {
        //         cnt++;
        //     }
        //     else
        //     {
        //         v.push_back(cnt);
        //         cnt=1;
        //     }
        // }
        // v.push_back(cnt);
        // sort(v.begin(),v.end());
        // for(int i=0; i<v.size()-1; i++)
        // {
        //     if(v[i]==v[i+1])
        //     {
        //         return false;
        //     }
        // }
        // return true;

        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        unordered_set<int>mp2;
        for(auto i:mp)
        {
            if(mp2.find(i.second)!=mp2.end())
            {
                return false;
            }
            else
            {
                mp2.insert(i.second);
            }
        }
        return true;
    }
};