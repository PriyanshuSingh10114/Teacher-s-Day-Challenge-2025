//Beginner's Track

//A. Team

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n){
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1 && v==1 && t==1 || p==1 && v==1 && t==0 ||p==0 && v==1 && t==1 ||p==1 && v==0 && t==1 ){
        count++;
        }
        n--;
    }
    cout<<count<<endl;
 
return 0;
}


//Advance Track

//A. Team

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n){
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1 && v==1 && t==1 || p==1 && v==1 && t==0 ||p==0 && v==1 && t==1 ||p==1 && v==0 && t==1 ){
        count++;
        }
        n--;
    }
    cout<<count<<endl;
 
return 0;
}
