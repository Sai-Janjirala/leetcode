class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int i = jewels.length();
        int j = stones.length();
    int count = 0 ;
        for(int k = 0 ; k < i; k++){
            for(int p = 0 ; p < j ; p++){
                if(stones[p] == jewels[k]){
                    count++;
                }
            }
        }
        return count;
    }
};