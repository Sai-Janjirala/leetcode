class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // Size of array
        int n = nums.size();

        // If k is bigger than array size
        // reduce it inside array range
        k = k % n;

        // New vector to store rotated elements
        vector<int> temp(n);

        // Traverse original array
        for(int i = 0; i < n; i++) {

            // Move current element k steps ahead
            int newIndex = i + k;

            // If new index goes outside array
            // bring it back to front
            if(newIndex >= n) {

                newIndex = newIndex - n;
            }

            // Place current element
            // in its new position
            temp[newIndex] = nums[i];
        }

        // Copy rotated array back
        nums = temp;
    }
};