class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
      
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if (*it >= target ) {
                return i;
            } 
            
            i++;
        }
        return i;
        
    }
};