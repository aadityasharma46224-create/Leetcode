class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        unordered_map<string,string>mp;
        int m = knowledge.size();
        for(int i=0; i<m; i++)
        {
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string st = "";
        bool bracket = false;
        string help="";
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                bracket = true;
                continue;
            }
            else if(s[i]==')')
            {
                bracket = false;

                //new way to find key value in map
                auto it = mp.find(help);

                if(it != mp.end())
                    st += it->second;
                else
                    st += '?';
                help = "";
            }
            else if(bracket==true)
            {
                help = help + s[i];
            }
            else
            {
                st = st + s[i];
            }
        }
        return st;
    }
};