//Beginner's Track

//412. Fizz Buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i=1;i<=n;i++){

            if(i%5==0 && i%3==0){
                ans.push_back("FizzBuzz");
            }

            else if(i%3==0){
                ans.push_back("Fizz");
            }

            else if(i%5==0){
                ans.push_back("Buzz");
            }

            else{
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};

//Advanced Track

//49. Group Anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            ans[temp].push_back(strs[i]);
        }
        vector<vector<string>>answer;
        for(auto i:ans){
            answer.push_back(i.second);
        }
        return answer;
    }
};

//100. Same Tree

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL){
            return (p==q);
        }
        return (p->val == q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

