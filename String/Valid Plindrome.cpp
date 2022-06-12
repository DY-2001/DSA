class Solution {
public:
    bool isPalindrome(string s) {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
            return !std::isalnum(c);
        });

        s.erase(it, s.end());

        for(int i = 0; i < s.size() / 2; i++) {
            if(s[i] != s[s.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
