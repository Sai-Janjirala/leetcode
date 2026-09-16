class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int count =0;
        int sum = 0 ;
        for(int i =0 ; i < k; i++){
            sum = sum + arr[i];
        }
        if(sum/k >= th ){
            count++;
        }
    
        for( int i = k; i < arr.size(); i++){
            sum = sum - arr[i-k] + arr[i];
            if(sum/k >= th){
                count++;
            }
        }
        return count;
    }
};