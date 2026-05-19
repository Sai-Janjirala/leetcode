class Solution {
public:
    void nextPermutation(vector<int>& A) {

        int n = A.size();
        int pivot = -1;

        // Step 1: Find pivot
        for(int i = n - 2; i >= 0; i--) {

            if(A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot found
        if(pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }

        // Step 2: Find next greater element
        for(int i = n - 1; i > pivot; i--) {

            if(A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // Step 3: Reverse right side
        int left = pivot + 1;
        int right = n - 1;

        while(left < right) {

            swap(A[left], A[right]);

            left++;
            right--;
        }
    }
};