
//Beginner's Track - 43 Days Journey

//Arrival of the General

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
 
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
 
    int max_val=*max_element(ans.begin(),ans.end());
    int min_val=*min_element(ans.begin(),ans.end());
 
    int max_index=0;
    for(int i=0;i<n;i++){
        if(ans[i]==max_val){
            max_index=i;
            break;
        }
    }
 
    int min_index=n-1;
    for(int i=n-1;i>=0;i--){
        if(ans[i]==min_val){
            min_index=i;
            break;
        }
    }
 
    int result=0;
    if(max_index>min_index){
        result=max_index + (n-1-min_index)-1;
    }
    else{
        result=max_index + (n-1-min_index);
    }
    cout<<result<<endl;
return 0;
}
