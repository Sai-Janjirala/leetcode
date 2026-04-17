class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int i = 0, j = 0;
        for(int i = 0; i < n ; i++){
            for(int j = i+1; j < n; j++ ){
               int sumPair = nums[i] + nums[j];
                if(sumPair == target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};