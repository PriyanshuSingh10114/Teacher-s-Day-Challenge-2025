
//Beginner's Track - 43 Days Journey

//734A Anton and Danik
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
 
    for(char c:s){
        if(c=='A'){
            c1++;    
        }
        else if(c=='D'){
            c2++;   
        }
    }
 
    if(c1>c2){
        cout<<"Anton"<<endl;
    }
    else if(c1==c2){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
 
return 0;
}
