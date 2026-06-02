class Solution {
public:
    int percentageLetter(string s, char letter) {

        int count = 0;

        // Count occurrences of letter
        for(int i = 0; i < s.length(); i++) {

            if(s[i] == letter) {

                count++;
            }
        }

        // Return percentage
        return (count * 100) / s.length();
    }
};