class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            string s = to_string(i);
            int size = s.size();
            count += (size - 1) / 3;
        }
        return count;
    }
};