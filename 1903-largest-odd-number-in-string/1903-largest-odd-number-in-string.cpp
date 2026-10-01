class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        string ans="";
        while(i>=0 && (num[i]-'0')%2==0){
            i--;
        }
        if(i<0) return "";
        int start=0;
        while(start<i && num[start]=='0'){
            start++;
        }
        return num.substr(start,i-start+1);
    }
};