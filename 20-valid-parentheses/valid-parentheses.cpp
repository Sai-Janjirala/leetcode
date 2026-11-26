class Solution {
public:
    bool isValid(string str) {
        stack<char> s;

        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                s.push(ch);

            } else if (!s.empty()) {
                if ((str[i] == ')' && s.top() == '(') ||
                    (str[i] == '}' && s.top() == '{') ||
                    (str[i] == ']' && s.top() == '[')) {
                s.pop();
                }
                else{
                    return false;
                }

            }
          else   if(s.empty() && ( ch==']' || ch=='}' || ch==')')){
                return false;
            }
        }
        if (s.empty()) {
            return true;
        }
        return false;
    }
};