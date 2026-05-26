class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maxCount = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            // Consecutive 1 found
            if(nums[i] == 1) {

                count++;
            }

            // Streak breaks
            else {

                if(count > maxCount) {

                    maxCount = count;
                }

                count = 0;
            }
        }

        // Final check
        if(count > maxCount) {

            maxCount = count;
        }

        return maxCount;
    }
};