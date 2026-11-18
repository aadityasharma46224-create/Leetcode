class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        reverse(people.begin(),people.end());
        int ans = 0;
        int i=0; 
        int j=n-1;
        while(i<=j)
        {
            if(people[i]==limit)
            {
                ans++;
            }
            else if(people[i]<limit)
            {
                if((people[i]+people[j])<=limit)
                {
                    j--;
                }
                ans++;
            }
            i++;
        }
        return ans;
    }
};