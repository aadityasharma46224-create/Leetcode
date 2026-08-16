class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        vector<int>v(n);
        v[n-1]=0;
        st.push(heights[n-1]);  
        for(int i=n-2; i>=0; i--)
        {
            int cnt=0;
            while(!st.empty() && st.top()<heights[i])
            {
                cnt++;
                st.pop();
            }
            if(!st.empty() && heights[i]<st.top())
            {
                cnt++;
            }
            st.push(heights[i]);
            v[i]=cnt;
        }
        return v;
    }
};