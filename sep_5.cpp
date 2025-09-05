
//Advanced Track - 43 Days Journey

//Magic Numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    if(!(cin>>s)){
        return 0;
    }
    for(size_t i=0;i<s.size();){
        if(i+2<s.size() && s.substr(i,3)=="144"){
            i+=3;
        }
        else if(i+1<s.size() && s.substr(i,2)=="14"){
            i+=2;
        }
        else if(s[i]=='1'){
            i+=1;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
return 0;
}
