class Solution {
public:
    unordered_map<char,int>ptt;
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int l=pattern.length();
        vector<string>ans;
        int x=1;
        for(int i =0;i<l;i++){
            if(ptt.count(pattern[i])==0){
                ptt[pattern[i]]=x;
                x++;
            }
        }
        for(int i =0;i<words.size();i++){
            int  y=1;
            unordered_map<char,int>wo;
        for(int j=0;j<l;j++){
            if(wo.count(words[i][j])==0){
                wo[words[i][j]]=y;
                y++;
            }
        }
        int j;
        for(j=0;j<l;j++){
            if(wo[words[i][j]]!=ptt[pattern[j]]){
                break;
            }
        }
            if(j==l){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};