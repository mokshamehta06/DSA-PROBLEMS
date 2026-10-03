class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        stack<char>st;
        for(char ch:num){
            while(!st.empty()){
                if(k==0) break;
                if(st.top()<=ch) break;
                st.pop();
                k--;
            }
            st.push(ch);
        }
        while(k>0){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size()&& ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        if(ans.empty()) return "0";
        return ans;
        
    }
};