class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;

        for (int i = 0; i < op.size(); i++) {

            if (op[i] == "C") {
                st.pop();
            }

            else if (op[i] == "D") {
                st.push(2 * st.top());
            } else if (op[i] == "+") {
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else {
            st.push(stoi(op[i]));
        }
        }

        

        int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }

        return total;
    }
};