class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;

        for (string word : strs) {
            string temp = word;
            sort(temp.begin(), temp.end());
            anagram[temp].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& it : anagram) {
            result.push_back(it.second);
        }

        return result;
    }
};