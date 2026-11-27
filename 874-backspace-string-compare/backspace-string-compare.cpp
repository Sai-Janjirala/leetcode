class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (s[i] != '#') {
                st1.push(ch);
            } 
            else if(ch == '#' && st1.empty()){
                continue;
            }
            else {
                st1.pop();
            }
        }

        for (int i = 0; i < t.length(); i++) {
            char chh = t[i];
            if (t[i] != '#') {
                st2.push(chh);
            }
            else if(chh == '#' && st2.empty()){
                continue;
            }
             else {
                st2.pop();
            }
        }

        if (st1 == st2) {
            return true;
        } else {
            return false;
        }
    }
};