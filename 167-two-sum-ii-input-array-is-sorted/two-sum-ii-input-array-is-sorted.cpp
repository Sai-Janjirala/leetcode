class Solution {
public:
    vector<int> twoSum(vector<int>& s, int target) {
        vector<int> ans;
        int i = 0;
        int j = s.size() -1;

        while(i  < j){
            int sum = s[i] + s[j];
            if(sum == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(target < sum){
                j--;
            }
            else if(target > sum){
                i++;
            }
        }
       return {};
    };
};