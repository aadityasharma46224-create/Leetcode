class Solution {
public:
    bool checkDivisibility(int n) {
        int s = n;
        int sum = 0;
        int product = 1;
        while(s>0)
        {
            int r = s%10;
            sum = sum + r;
            product = product * r;
            s = s/10;
        }
        if(n%(sum+product)==0)
        {
            return true;
        }
        return false;
    }
};