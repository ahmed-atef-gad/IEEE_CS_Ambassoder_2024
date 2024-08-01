class Solution {
public:
    bool isPalindrome(string s) {
        int lft=0;
        int rht=s.size()-1;

        while(lft<=rht){
            if(!isalnum(s[lft])){
                lft++;
            }else if(!isalnum(s[rht])){
                rht--;
            }else if(tolower(s[lft]) != tolower(s[rht])){
                return false;
            }else{
                lft++;
                rht--;
            }
            
        }
        return true;
    }
};