class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int sum = 0;
        int n = arr.size();

        // Choose starting index
        for(int i = 0; i < n; i++) {

            // Choose ending index
            for(int j = i; j < n; j++) {

                int len = j - i + 1;

                // Check odd length
                if(len % 2 != 0) {

                    for(int k = i; k <= j; k++) {

                        sum += arr[k];
                    }
                }
            }
        }

        return sum;
    }
};