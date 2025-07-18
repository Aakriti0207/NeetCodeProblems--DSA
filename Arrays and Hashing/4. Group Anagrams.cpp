//Group Anagrams
//Given an array of strings strs, group the anagrams together. You can return the answer in any order.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>result;
        unordered_map<string , vector<string>>mpp;
        for(string s: strs){
            string temp=s;
            sort(temp.begin() , temp.end());
            mpp[temp].push_back(s);
        }
        for(auto group:mpp){
            result.push_back(group.second);
        }
        return result;
        
    }
};
