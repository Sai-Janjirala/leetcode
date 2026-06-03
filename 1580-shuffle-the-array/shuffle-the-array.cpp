class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans1;
        vector<int> ans2;
        vector<int> ans3;

        for(int i = 0 ; i < nums.size()/2 ; i++){
            ans1.push_back(nums[i]);
        };
        for(int i = nums.size()/2 ; i < nums.size() ; i++){
            ans2.push_back(nums[i]);
        };
        for(int i = 0 ; i < nums.size()/2 ; i++){
            ans3.push_back(ans1[i]);
            ans3.push_back(ans2[i]);
        };
    return ans3;
    }
    
};