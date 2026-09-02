class Solution {
public:

    string revers(string s)
    {
        int n = s.size();
        string p = "";
        for(int i=n-1; i>=0; i--)
        {
            p = p + s[i];
        }
        return p;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            string rev = revers(words[i]);
            for(int j=i+1; j<n; j++)
            {
                if(rev==words[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
        // unordered_set<string>s;
        // for(int i=0; i<n; i++)
        // {
        //     s.insert(words[i]);
        // }
        // int cnt=0; 
        // for(int i=0; i<n; i++)
        // {
        //     string rev = revers(words[i]);
        //     if(s.find(rev)!=s.end())
        //     {
        //         cnt++;
        //     }
        // }
        // return cnt/2;
    }
};