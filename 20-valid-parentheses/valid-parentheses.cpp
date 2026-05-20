class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i = 0; i < s.length(); i++) {

            char ch = s[i];

            // Opening brackets
            if(ch == '(' || ch == '{' || ch == '[') {

                st.push(ch);
            }

            // Closing brackets
            else {

                // Stack empty means no matching opening bracket
                if(st.empty()) {
                    return false;
                }

                // Check matching brackets
                if((ch == ')' && st.top() == '(') ||
                   (ch == '}' && st.top() == '{') ||
                   (ch == ']' && st.top() == '[')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        // Valid only if stack becomes empty
        return st.empty();
    }
};