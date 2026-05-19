class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();

        string ans = "";

        // Step 1: Reverse whole string
        reverse(s.begin(), s.end());

        for(int i = 0; i < n; i++) {

            string word = "";

            // Skip spaces
            while(i < n && s[i] == ' ') {
                i++;
            }

            // Store one word
            while(i < n && s[i] != ' ') {

                word += s[i];
                i++;
            }

            // Reverse word back
            reverse(word.begin(), word.end());

            // Add word to answer
            if(word.length() > 0) {

                if(ans.length() > 0) {
                    ans += " ";
                }

                ans += word;
            }
        }

        return ans;
    }
};