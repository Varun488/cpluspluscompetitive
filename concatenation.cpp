// concatenation of array problem  - leetcode         
// difficulty level - easy
// using stl vector
 
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(),nums.begin(),nums.end() );
        return nums;
        
    }
};
