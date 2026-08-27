class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i=n-1;
        bool found = false;
        vector<int>v;
        if(digits[n-1]>=0 && digits[n-1]<=8)
        {
            digits[n-1]++;
            found = true;
        }
        else
        {
            int carry = 1;
            while(i>=0)
            {
                if(digits[i]==9)
                {
                    int r = (digits[i]+carry)%10;
                    v.push_back(r);
                    carry = (digits[i]+carry)/10;
                }
                else
                {
                    int r = (digits[i]+carry);
                    v.push_back(r);
                    carry = 0;
                }
                i--;
            }
            if(carry==1)
            {
                v.push_back(1);
            }
        }
        if(found==false)
        {
            reverse(v.begin(),v.end());
            return v;
        }
        return digits;
        // int x = 0;
        // for(int i=0; i<n; i++)
        // {
        //     x = x*10 + digits[i];
        // }
        // x++;
        // vector<int>v;
        // while(x>0)
        // {
        //     int r = x%10;
        //     v.push_back(r);
        //     x = x/10;
        // }
        // reverse(v.begin(),v.end());
        // return v;
    }
};