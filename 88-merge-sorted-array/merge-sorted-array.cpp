class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int i = 0;
        while( i < m ){
            nums3.push_back(nums1[i]);
            i++;
        }
        int j=0;
        while( j < n ){
            nums3.push_back(nums2[j]);
            j++;
        }
        sort(nums3.begin(),nums3.end());
        for(int k =0 ; k < nums3.size(); k++ ){
             nums1[k] = nums3[k];
        }
        
        return ;
    }
};