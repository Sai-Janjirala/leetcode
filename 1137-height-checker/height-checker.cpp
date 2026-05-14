class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a;
        int count = 0;
        for(int i = 0 ; i < heights.size(); i++){
            a.push_back(heights[i]);
        }
        sort(a.begin(),a.end());
        for(int j = 0 ; j < a.size(); j++){
            if(a[j] != heights[j]){
                count++;
            }
        }
            return count;
    }

};