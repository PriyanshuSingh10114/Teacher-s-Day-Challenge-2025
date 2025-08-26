
//Beginner's Track - 43 Days Journey

//A. Presents

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n),q(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        q[p[i]-1]=i+1;
    }
 
    for(int i=0;i<n;i++){
        cout<<q[i]<<" ";
    }
return 0;
}
