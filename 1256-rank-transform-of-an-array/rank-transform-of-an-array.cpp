class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> sorted = arr;

        // Sort copy of array
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;

        int r = 1;

        // Assign ranks
        for(int i = 0; i < sorted.size(); i++) {

            if(rank.find(sorted[i]) == rank.end()) {

                rank[sorted[i]] = r;
                r++;
            }
        }

        // Replace values with ranks
        for(int i = 0; i < arr.size(); i++) {

            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};