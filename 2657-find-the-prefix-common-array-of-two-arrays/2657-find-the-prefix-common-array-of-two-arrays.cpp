class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int,int>mp;
        vector<int>v;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(mp.find(A[i])!=mp.end())
            {
                cnt++;
            }
            else
            {
                mp[A[i]]++;
            }
            if(mp.find(B[i])!=mp.end())
            {
                cnt++;
            }
            else
            {
                mp[B[i]]++;
            }
            v.push_back(cnt);
        }
        return v;
    }
};