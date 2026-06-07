class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i = 0 ; i < nums.size() ; i++){
            int current  = nums[i];
            mp[current]++;

            if(mp[current] >  1){
                return true;
            }
        }
        return false;
    }
};