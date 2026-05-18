class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int curMax = nums[0];
        int curMin = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            int temp = curMax;

            curMax = max(nums[i],
                        max(curMax * nums[i],
                            curMin * nums[i]));

            curMin = min(nums[i],
                        min(temp * nums[i],
                            curMin * nums[i]));

            ans = max(ans, curMax);
        }

        return ans;
    }
};