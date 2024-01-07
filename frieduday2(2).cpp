#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=0;
        int j=1;
        int maxprofit=0;
        while(j<n){
            if(prices[i]<prices[j]){
          int profit= prices[j]-prices[i];
          maxprofit=max(profit,maxprofit);
            }else{
                i=j;

            }
            j++;
        }
return maxprofit;
    }
};