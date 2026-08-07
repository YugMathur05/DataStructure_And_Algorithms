class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();

        if (m < n)
            return false;

        string s = "";
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (name[i] == typed[j]) {
                s += name[i];
                i++, j++;
            } else if (name[i] != typed[j] && j > 0 &&
                       typed[j] == typed[j - 1]) {
                j++;
            } else {
                return false;
            }
        }
        while (j < m) {
            if (typed[j] == typed[j - 1])
                j++;
            else
                return false;
        }
        if (s == name)
            return true;
        return false;
    }
};