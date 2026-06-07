class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> num;
        for(int i = 0 ; i < nums.size() ; i++){
            num.insert(nums[i]);
        }
        vector<int> ans;
        for( int x: num){
            ans.push_back(x);
        }
        if(ans.size() < 3){
            return ans[ans.size() -1];
        }

        return ans[ans.size() -3];

    }
};