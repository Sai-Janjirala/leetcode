class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {

            char ch = s[right];

            // If character already exists in current window
            if (mp.find(ch) != mp.end()) {
                left = max(left, mp[ch] + 1);
            }

            // Update the latest index of current character
            mp[ch] = right;

            // Update maximum length
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};