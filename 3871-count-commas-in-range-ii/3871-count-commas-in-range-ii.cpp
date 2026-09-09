class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)
        {
            return 0;
        }
        else if(n>=1000 && n<pow(10,6))
        {
            long long x = n-999;
            return x;
        }
        else if(n>=pow(10,6) && n<pow(10,9))
        {
            long long x = 2*(n-999999);
            long long y = pow(10,6)-1000;
            return x + y;
        }
        else if(n>=pow(10,9) && n<pow(10,12))
        {
            long long x = n-999999999;
            long long y = pow(10,9)-1000000;
            long long z = pow(10,6)-1000;
            return 3*x + 2*y + z;
        }
        else if( n>=pow(10,12) && n<pow(10,15))
        {
            long long x = n-999999999999;
            long long a = pow(10,12)-1000000000;
            long long y = pow(10,9)-1000000;
            long long z = pow(10,6)-1000;
            return 4*x + 3*a + 2*y + z;
        }
        else
        {
            long long x = n-999999999999;
            long long a = pow(10,12)-1000000000;
            long long y = pow(10,9)-1000000;
            long long z = pow(10,6)-1000;
            return 4*x + 3*a + 2*y + z + 1;
        }
        return -1;
    }
};