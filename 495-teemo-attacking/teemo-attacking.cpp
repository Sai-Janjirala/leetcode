class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int total = 0;

        // Traverse attacks
        for(int i = 0; i < timeSeries.size() - 1; i++) {

            int gap = timeSeries[i + 1] - timeSeries[i];

            // If next attack comes before poison ends
            if(gap < duration) {

                total += gap;
            }

            // No overlap
            else {

                total += duration;
            }
        }

        // Add last attack duration
        total += duration;

        return total;
    }
};