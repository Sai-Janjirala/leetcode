class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        set<string> s;

        for(int i = 0; i < emails.size(); i++) {

            string email = emails[i];

            string local = "";
            string domain = "";

            int j = 0;

            // Build local name
            while(email[j] != '@') {

                if(email[j] == '+') {

                    while(email[j] != '@') {

                        j++;
                    }

                    break;
                }

                if(email[j] != '.') {

                    local += email[j];
                }

                j++;
            }

            // Build domain name
            while(j < email.length()) {

                domain += email[j];
                j++;
            }

            s.insert(local + domain);
        }

        return s.size();
    }
};