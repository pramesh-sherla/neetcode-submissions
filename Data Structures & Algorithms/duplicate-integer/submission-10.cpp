class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> hashed;
       for(int i =0; i< nums.size(); i++)
       {
        if (hashed.count(nums[i]))
        {
            return true;
        }
        hashed.insert(nums[i]);
       } 
       return false;
    }
};