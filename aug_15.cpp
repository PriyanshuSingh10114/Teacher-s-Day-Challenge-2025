//Beginner's Track - 43 Days Journey

//B. Queue at the School  266B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t>>s;
 
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j]='G';
                s[j+1]='B';
                j=j+2;
            }
            else{
                j=j+1;
            }
        }
    }
    cout<<s<<endl;
return 0;
}


//Advanced Track - 43 Days Journey

