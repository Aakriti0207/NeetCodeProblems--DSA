//Binary Search
//Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

//You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0 , high=n-1;
        while(low<=high){
            int mid=(low+high)/2; 
            if(target == nums[mid]) return mid;
            else(target < nums[mid]) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};
