class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int m = requests.size();
        int maxx = requests[0]; 
        int time = maxx;
        for(int i=1; i<m; i++)
            {
                if(requests[i]>maxx)
                {
                    time = time + (requests[i]-maxx);
                }
                else
                {
                    time = time + (maxx-requests[i]);
                }
                maxx = requests[i];
            }
        return time;
    }
};