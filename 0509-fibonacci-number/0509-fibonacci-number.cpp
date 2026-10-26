class Solution {
public:
    int fibo(int n, vector<int>&v)
    {
        if(n==1 || n==0)
        {
            return n;
        }
        if(v[n]!=-1)
        {
            return v[n];
        }
        v[n]= fibo(n-1, v)+fibo(n-2, v);
        return v[n];
    }
    int fib(int n) {
        vector<int>dp(n+1, -1);
        return fibo(n, dp);
    }
};