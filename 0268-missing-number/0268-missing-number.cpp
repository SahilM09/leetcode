class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorResult = n;

        for(int i = 0; i < n; i++){
            xorResult ^= i ^ nums[i];
        }

        return xorResult;
    }
};