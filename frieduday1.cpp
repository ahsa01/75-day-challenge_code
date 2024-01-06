#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
        myMap[nums[i]] = i;
        }

        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (myMap.count(complement) && myMap[complement] != i) {
                return {i, myMap[complement]};
            }
        }

        return {}; // No solution found
    }
};