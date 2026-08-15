class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int n = prices.size();
        int m = discounts.size();
        int i = n - 1;
        int j = m - 1;
        double sum = 0;
        while (j >= 0 && i >= 0) {
            double dis = prices[i]*(100.0-discounts[j])/100.0;
            sum+=dis;
            i--,j--;
        }
        while(i>=0)
            {
                sum+=prices[i];
                i--;
            }
        return sum;
    }
};