class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> num;

        // Store unique elements
        for(int i = 0; i < nums.size(); i++) {
            num.insert(nums[i]);
        }

        // Convert set into vector
        vector<int> ans;

        for(int x : num) {
            ans.push_back(x);
        }

        // If less than 3 distinct elements
        if(ans.size() < 3) {
            return ans[ans.size() - 1];
        }

        // Return 3rd largest
        return ans[ans.size() - 3];
    }
};