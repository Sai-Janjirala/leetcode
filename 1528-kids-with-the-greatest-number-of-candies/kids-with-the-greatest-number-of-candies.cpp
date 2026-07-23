class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max  = candies[0];
        for(int i  = 0 ; i  < candies.size() ; i++){
            if(candies[i]  > max){
                max = candies[i];
            }
        }
        for(int j = 0  ; j < candies.size() ; j++){
            if(candies[j] + extraCandies >= max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
         return ans;
    }
   
};