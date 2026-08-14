class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        stack<char>st;
        int cnt;
        string ans="";
        bool find = false;
        for(int i=0; i<n; i++)
        {
            cnt = i;
            if(word[i]!=ch)
            {
                st.push(word[i]);
            }
            else
            {
                st.push(word[i]);
                find = true;
                break;
            }
        }
        if(find==false)
        {
            return word;
        }
        while(!st.empty())
        {
            ans = ans + st.top();
            st.pop();
        }
        for(int i=cnt+1; i<n; i++)
        {
            ans = ans + word[i];
        }
        return ans;
    }
};