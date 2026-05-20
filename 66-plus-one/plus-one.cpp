class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        // Start from last digit
        for(int i = n - 1; i >= 0; i--) {

            // If digit is not 9
            if(digits[i] != 9) {

                digits[i] = digits[i] + 1;

                return digits;
            }

            // If digit is 9
            digits[i] = 0;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);

        return digits;
    }
};