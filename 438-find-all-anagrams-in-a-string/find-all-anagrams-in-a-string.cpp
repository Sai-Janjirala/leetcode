class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (s.size() < p.size()) return ans;

        vector<int> pCount(26, 0);
        vector<int> window(26, 0);

        // Frequency of pattern
        for (char ch : p)
            pCount[ch - 'a']++;

        int k = p.size();

        // First window
        for (int i = 0; i < k; i++)
            window[s[i] - 'a']++;

        if (window == pCount)
            ans.push_back(0);

        // Slide the window
        for (int i = k; i < s.size(); i++) {

            // Remove left character
            window[s[i - k] - 'a']--;

            // Add right character
            window[s[i] - 'a']++;

            if (window == pCount)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};