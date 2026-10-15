class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int>prefix(n);
        for(int i=0; i<n; i++)
        {
            sum = sum + nums[i];
            prefix[i]= sum;
        }
        vector<int>answer;
        for(int i=0; i<n; i++)
        {
            int left = (i==0)?0:prefix[i-1];
            int right = prefix[n-1]-prefix[i];
            int x = abs(right-left);
            answer.push_back(x);
        }
        return answer;
    }
};