class Solution {
public:
    int minPartitions(string n) {
        int siz = n.size();
        int maxi = 0;
        for(int i=0; i<siz; i++)
        {
            int x = n[i]-'0';
            if(x>maxi)
            {
                maxi = x;
            }
        }
        return maxi;
    }
};