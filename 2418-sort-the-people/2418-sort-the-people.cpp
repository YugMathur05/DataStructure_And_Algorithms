class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> mp;
        int n = names.size();
        for (int i = 0; i < n; i++) {
            mp[heights[i]] = names[i];
        }
        int i = 0;
        for (auto x : mp) {
            names[i] = x.second;
            i++;
        }
        reverse(names.begin(), names.end());
        return names;
    }
};