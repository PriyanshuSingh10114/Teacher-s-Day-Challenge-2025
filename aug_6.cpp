//Beginner's Track

//A. Helpful Maths

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>ans;
    for(int i=0;i<s.size();i=i+2){
        ans.push_back(s[i]-'0');
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(i!=0){
            cout<<"+";
        }
        cout<<ans[i];
    }
    cout<<endl;
 
return 0;
}

//B. Drinks
  
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    float avg;
    float sum=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        ans.push_back(p);
    }
    
    for(int i=0;i<ans.size();i++){
        sum=sum+ans[i]; 
    }
    avg=sum/n;
    cout<<avg<<endl;
 
return 0;
}
