class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int st = 0;
        int end = nums.size() - 1;

        while(st <= end) {

            int mid = st + (end - st) / 2;

            // Target found
            if(nums[mid] == target) {
                return mid;
            }

            // Search right side
            else if(nums[mid] < target) {
                st = mid + 1;
            }

            // Search left side
            else {
                end = mid - 1;
            }
        }

        // Insert position
        return st;
    }
};