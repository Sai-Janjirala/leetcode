class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int start = 0;
        int best = 0;
        int lastFruit = -1;
        int secondLastFruit = -1;
        int lastFruitCount = 0;

        for (int end = 0; end < n; end++) {
            int currentFruit = fruits[end];

            if (currentFruit == lastFruit) {
                lastFruitCount++;
            }
            else if (currentFruit == secondLastFruit) {
                secondLastFruit = lastFruit;
                lastFruit = currentFruit;
                lastFruitCount = 1;
            }
            else {
                start = end - lastFruitCount;
                secondLastFruit = lastFruit;
                lastFruit = currentFruit;
                lastFruitCount = 1;
            }

            best = max(best, end - start + 1);
        }

        return best;
    }
};