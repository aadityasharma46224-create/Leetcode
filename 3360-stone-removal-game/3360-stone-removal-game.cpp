class Solution {
public:
    bool canAliceWin(int n) {
        int ans = 0;
        if(n<10)
        {
            return false;
        }
        else
        {
            int i=0;
            int m = n;
            while(m>0)
            {
                m = m -(10-i);
                if(m>=0)
                {
                    ans++;
                    i++;
                }
            }
        }
        if(ans%2==0)
        {
            return false;
        }
        return true;
    }
};