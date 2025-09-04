//Beginner's Track - 43 Days Journey

//HQ9+

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(char ch:str){
        if(ch=='H'||ch=='Q'||ch=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
return 0;
}
