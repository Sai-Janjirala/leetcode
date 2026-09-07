class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1;

        while (i < nums.size() && j < nums.size()) {

            if (nums[i] != 0) {
                i++;
                if (j <= i)
                    j = i + 1;
            }
            else if (nums[j] == 0) {
                j++;
            }
            else {
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
                j++;
            }
        }
    }
};