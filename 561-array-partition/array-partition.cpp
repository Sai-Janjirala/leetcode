class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        // Sort array
        sort(nums.begin(), nums.end());

        int sum = 0;

        // Take every alternate element
        for(int i = 0; i < nums.size(); i += 2) {

            sum += nums[i];
        }

        return sum;
    }
};