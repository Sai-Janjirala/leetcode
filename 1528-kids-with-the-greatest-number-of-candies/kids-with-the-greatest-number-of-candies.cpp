class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxNum = INT_MIN;
        vector<bool> ans;
        for(int i =0 ; i < candies.size() ; i++){
            if(candies[i] > maxNum){
            maxNum = candies[i];
}
        };
        for(int i = 0 ; i  < candies.size() ; i++){
            ans.push_back(candies[i]+extraCandies >= maxNum);
        };
      return ans;  
    }
};