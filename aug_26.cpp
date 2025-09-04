
//Advanced Track - 43 Days Journey

//Divisbility Problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            int n=b-a%b;
            cout<<n<<endl;
        }
    }

return 0;
}
