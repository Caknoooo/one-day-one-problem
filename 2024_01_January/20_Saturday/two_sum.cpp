class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i; // 2, 7, 11, 15 -> numMap[2] = 0, numMap[7] = 1, numMap[11] = 2, numMap[15] = 3
        }

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i]; // 9 - 2 = 7, 9 - 7 = 2, 9 - 11 = -2, 9 - 15 = -6
            if (numMap.count(complement) && numMap[complement] != i) { // numMap.count(7) = 1, numMap.count(2) = 1, numMap.count(-2) = 0, numMap.count(-6) = 0
                return {i, numMap[complement]}; // {0, 1}, {1, 0}
            }
        }

        return {}; // No Solution Found
    }
};