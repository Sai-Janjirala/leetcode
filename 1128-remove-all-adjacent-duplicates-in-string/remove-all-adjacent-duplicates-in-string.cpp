class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> s;

        for(int i =  0  ; i < str.length(); i++){
            char ch = str[i];

            if(s.empty()){
                s.push(ch);
            }
            else if(ch == s.top()){
                s.pop();
            }
            else{
                s.push(ch);
            }

        }

        string ans = "";

        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());


        return ans;
    }
};