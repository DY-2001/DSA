// LeetCode

class Solution {
public:
    bool detectCapitalUse(string word) {
        int lower = -1, upper = -1;
        bool result;
        
        
        
        for(int i = 1; i < word.size(); i++) {
            if(islower(word[i])) {
                lower = 0;
            }
            if(isupper(word[i])) {
                upper = 0;
            }
        }
        
        
        
        if(lower == 0 && upper == 0) {
            return false;
        }
        else if(lower == -1 && upper == 0) {
            if(isupper(word[0])) {
                result = true;
            }
            else {
                result = false;
            }
        }
        else if(lower == 0 && upper == -1) {
            return true;
        }
        return result;
    }
};
