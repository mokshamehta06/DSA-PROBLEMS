class Solution {
public:
    bool checkString(string s) {
       int idx=-1;
       for(int i=0;i<s.size();i++){
        if(s[i]=='b'){
             idx=i;
             break;
         }
       } 
       for(int j=idx;j<s.size();j++){
        if(s[j]=='a'){
            return false;
        }
       }
       return true;
    }
};