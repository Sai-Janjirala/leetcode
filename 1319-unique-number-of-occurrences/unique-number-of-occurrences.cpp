class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        set<int> seen;
        for(auto p : mp ){
{
    if(seen.count(p.second))
    {
        return false;
    }

    seen.insert(p.second);
}
        }
        return true;
}
};