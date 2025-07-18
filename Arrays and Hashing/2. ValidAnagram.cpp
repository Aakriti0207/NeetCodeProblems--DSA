// Valid Anagram
//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        if(n!=m) return false;
        unordered_map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        for(char c:t){
            mpp[c]--;  // Remember- better than creating another map or taking input of both strings in single map 
            if(mpp[c]<0) return false;
        }
        return true;
    }
}; 
