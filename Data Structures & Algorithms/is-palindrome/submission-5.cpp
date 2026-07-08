class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch >='0' && ch <='9')
        ||(ch >='a' && ch <='z') 
        ||(ch >='A' && ch <='Z') ){return true;} 
         else return false;
    }
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.size();
        int i =0 ; int j = n-1;
        while(i<j){
            while(i<j && !isAlphaNum(s[i])) i++;
            while(i<j && !isAlphaNum(s[j])) j--;
            if((s[i]) != (s[j])){
                return false;
            }
            else{
                i++ ;j--;
            }




            // if(isAlphaNum(s[i])&&isAlphaNum(s[j])&& tolower(s[i])==tolower(s[j])){
            //     i++;j--;
            // }
            // else if(isAlphaNum(s[i])&&isAlphaNum(s[j])&& tolower(s[i])!=tolower(s[j])){
            //     return false;
            // }
            // else if(!isAlphaNum(s[i])&&isAlphaNum(s[j])){
            //     i++;
            // }
            // else j--;
        }
       return true; 
    }
};
