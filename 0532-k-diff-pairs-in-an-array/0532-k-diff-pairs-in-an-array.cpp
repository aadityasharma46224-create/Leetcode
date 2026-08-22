class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n= nums.size();
        if(n==1)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>>vv;
        int slow = 0;
        int fast = 1;
        while(slow<n && fast<n)
        {
            if(slow==fast)
            {
                fast++;
            }
            else
            {
                vector<int>v(2);
                int x = abs(nums[slow]-nums[fast]);
                if(x==k)
                {
                    if(nums[slow]<nums[fast])
                    {
                        v[0]=nums[slow];
                        v[1]=nums[fast];
                    }
                    else
                    {
                        v[0]=nums[fast];
                        v[1]=nums[slow];
                    }
                    vv.push_back(v);
                    slow++;
                    fast++;
                }
                else if(x>k)
                {
                    slow++;
                }
                else if(x<k)
                {
                    fast++;
                }
            }  
        }
        sort(vv.begin(),vv.end());
        vv.erase(unique(vv.begin(),vv.end()),vv.end());
        return vv.size();
    }
};