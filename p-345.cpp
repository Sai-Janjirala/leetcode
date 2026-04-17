class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            char l = s[left];
            if (!(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U')) {
                left++;
            } 
            else {
                char r = s[right];
                if (!(r=='a'||r=='e'||r=='i'||r=='o'||r=='u'||r=='A'||r=='E'||r=='I'||r=='O'||r=='U')) {
                    right--;
                } 
                else {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
            }
        }
        return s;
    }
};