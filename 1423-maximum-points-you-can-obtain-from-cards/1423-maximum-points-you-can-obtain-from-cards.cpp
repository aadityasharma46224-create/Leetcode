class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans + cardPoints[i];
        }
        int p = n - k;
        int windowsum = 0;
        for (int i = 0; i < p; i++) {
            windowsum = windowsum + cardPoints[i];
        }
        int mini = windowsum;
        for (int i = p; i < n; i++) {
            windowsum = windowsum + cardPoints[i] - cardPoints[i - p];
            if (windowsum <= mini) {
                mini = windowsum;
            }
        }
        return ans - mini;
    }
};