//Beginner's Track

//20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s){
            if(i=='('||i=='{'||i=='['){
                st.push(i);
            }

            else{
                if(st.size()==0){
                    return false;
                }
                char ch=st.top();
                st.pop();
                if((i==')'& ch=='(') or (i==']'& ch=='[') or (i=='}'& ch=='{')){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

//Advanced Track

//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};

//206. Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* curr=head;
       ListNode* prev=NULL;
       ListNode* nextNode; 

       while(curr!=NULL){

        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
       }

       return prev;
    }
};
