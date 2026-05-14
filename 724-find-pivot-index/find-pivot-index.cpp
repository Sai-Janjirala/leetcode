class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        int leftSum = 0;
        int totalSum = 0;

        // Find total sum
        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        int rightSum;

        // Traverse array
        for(int i = 0; i < n; i++) {

            rightSum = totalSum - leftSum - nums[i];

            // Check pivot condition
            if(leftSum == rightSum) {
                return i;
            }

            // Update left sum
            leftSum += nums[i];
        }

        return -1;
    }
};