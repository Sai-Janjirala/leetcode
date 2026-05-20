class Solution {
public:
    int compress(vector<char>& chars) {

        int idx = 0;               // Position to insert compressed chars
        int n = chars.size();

        for(int i = 0; i < n; i++) {

            char ch = chars[i];    // Current character
            int count = 0;

            // Count same consecutive characters
            while(i < n && chars[i] == ch) {

                count++;
                i++;
            }

            // Store character
            chars[idx] = ch;
            idx++;

            // Store count only if > 1
            if(count > 1) {

                string str = to_string(count);

                for(char digit : str) {

                    chars[idx] = digit;
                    idx++;
                }
            }

            i--; // Because for-loop will also increase i
        }

        return idx;
    }
};