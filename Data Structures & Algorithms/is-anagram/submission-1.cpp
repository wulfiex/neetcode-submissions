class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        unordered_map<char,int> freq1;
        for(int i=0;i<s.size();i++){
         if(freq.find(s[i])== freq.end()){
            freq.insert({s[i],1});
         }else{
            freq[s[i]]++;
         }
        }
        for(int i=0;i<t.size();i++){
         if(freq1.find(t[i])== freq1.end()){
            freq1.insert({t[i],1});
         }else{
            freq1[t[i]]++;
         }
        }

        if(freq==freq1){
            return true;
        }else{
            return false;
        }
    }
};
