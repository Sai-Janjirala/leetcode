class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = -1;
        for(int i = 0 ; i  < word.length() ; i++){
            if(ch == word[i]){
                idx = i;
                break;
            }
        }

       if(idx != -1){
         reverse(word.begin() , word.begin()+idx+1);
       }
        return word;
    }
};