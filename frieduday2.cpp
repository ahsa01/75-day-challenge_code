#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long Actualsum=(long)n*(n+1)/2;
        long sum=0;
        for(int i: nums){
            sum = sum+i;
        }
        return int (Actualsum-sum);
    }
};