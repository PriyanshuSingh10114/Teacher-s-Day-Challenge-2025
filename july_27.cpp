//Beginner's Track

//125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};

//Advanced Track

//347. Top K Frequent Elements

class Solution {
public:
    static bool compare(pair<int,int>&p1,pair<int,int>&p2){
        if(p1.second==p2.second){
            return p1.first>p2.first;
        }
        return p1.second>p2.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        for(int i:nums){
            um[i]++;
        }

        vector<pair<int,int>>freq(um.begin(),um.end());
        sort(freq.begin(),freq.end(),compare);

        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(freq[i].first);
        }
        return res;  
    }
};

//226. Invert Binary Tree

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL || root->right==NULL && root->left==NULL){
            return root;
        }

        TreeNode* curr1=root->right;
        TreeNode* curr2=root->left;
        root->right=curr2;
        root->left=curr1;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
