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



// 155. Min Stack
class MinStack {
public:
    stack<int>st;
    stack<int>min_st;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
        if(min_st.empty()){
            min_st.push(val);
        }
        else if(min_st.top()>=val){
            min_st.push(val);
        }
    }
    
    void pop() {
        if(st.top()==min_st.top()){
            min_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
