class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int>st;
        for(int i = 0 ; i < n ; i++)
        {
            if(!st.empty() && operations[i]=="C")
            {
                st.pop();
            }
            else if (!st.empty() && operations[i]=="D")
            {
                st.push(2*st.top());
            }
            else if (operations[i]=="+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        int x = st.size();
        for(int i = 0 ; i  < x ; i++)
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};