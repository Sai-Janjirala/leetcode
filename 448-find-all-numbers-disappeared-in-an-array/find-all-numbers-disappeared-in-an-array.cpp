class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> ans;

        for(int i = 0 ; i < nums.size() ; i++){
            s.insert(nums[i]);          
        }
        for(int j = 1 ; j <= nums.size() ; j++){
            if(s.find(j) == s.end()){
                ans.push_back(j);
            }
        }
        return ans ;
    }
};