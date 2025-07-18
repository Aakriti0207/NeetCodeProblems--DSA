//Contains Duplicate
//Given an integer array nums, return true if any value appears at least twice in the array, 
//and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if(i.second >= 2){
                return true;
                break;
            }
        }
        return false;
    }
};