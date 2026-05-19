class Solution {
public:

    bool isAlphaNum(char ch) {

        if((ch >= '0' && ch <= '9') ||
           (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {

            return true;
        }

        return false;
    }

    bool isPalindrome(string s) {

        int st = 0;
        int end = s.length() - 1;

        while(st < end) {

            // Skip non-alphanumeric from left
            if(!isAlphaNum(s[st])) {
                st++;
                continue;
            }

            // Skip non-alphanumeric from right
            if(!isAlphaNum(s[end])) {
                end--;
                continue;
            }

            // Compare lowercase characters
            if(tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};