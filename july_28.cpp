//Beginner's Track

//1.Two sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            int complement=target - nums[i];
            if(um.find(complement)!=um.end()){
                return {um[complement],i};
            }
            um[nums[i]]=i;
        }
        return {};
    }
};

//Advanced Track

//121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min_price=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            int cost=prices[i]-min_price;
            max_profit=max(max_profit,cost);
            min_price=min(min_price,prices[i]);
        }
        return max_profit;
    }
};
