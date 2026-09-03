class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        map<int, int> mp; // set isiliye use nhi kiya kyunki set unique element
                          // store karata h
        for (int i = 0; i < n; i++) {
            mp[digits[i]]++;
        }
        for (int i = 100; i < 1000; i = i + 2) {
            int x = i;
            int a = x % 10;
            x = x / 10;
            int b = x % 10;
            x = x / 10;
            int c = x % 10;
            x = x / 10;
            if (mp.find(a) != mp.end()) {
                mp[a]--;
                if (mp[a] == 0) {
                    mp.erase(a);
                }
                if (mp.find(b) != mp.end()) {
                    mp[b]--;
                    if (mp[b] == 0) {
                        mp.erase(b);
                    }
                    if (mp.find(c) != mp.end()) {
                        ans.push_back(i);
                    }
                    mp[b]++;
                }
                mp[a]++;
            }
        }
        return ans;
    }
};