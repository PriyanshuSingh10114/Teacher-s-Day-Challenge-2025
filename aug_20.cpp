//Beginner's Track - 43 Days Journey

//Drinks

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
