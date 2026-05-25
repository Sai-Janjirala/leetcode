class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0; // pointer for s
        int j = 0; // pointer for t

        // Traverse t
        while(i < s.length() && j < t.length()) {

            // Characters match
            if(s[i] == t[j]) {

                i++;
            }

            // Always move in t
            j++;
        }

        // If all characters of s matched
        return i == s.length();
    }
};