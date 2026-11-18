class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<n; i++)
        {
            pq.push(nums[i]);
        }
        for(int i=0; i<k; i++)
        {
            int x = (-1)*pq.top();
            pq.pop();
            pq.push(x);
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};