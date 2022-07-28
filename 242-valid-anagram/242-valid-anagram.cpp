class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>x(26);
        vector<int>y(26);
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2){
            return false;
        }
        for(int i =0;i<l1;i++){
            x[s[i]-97]++;
            y[t[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(x[i]!=y[i]){
                return false;
            }
        }
        return true;
    }
};