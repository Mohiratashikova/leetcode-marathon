class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];
        for (auto it = nums.begin(); it != nums.end(); it ++) {
            if (*it <= min ) {
                min = *it;
            }
        }
        return min;
    }
};