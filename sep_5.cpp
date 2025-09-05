
//Beginner's Track - 43 Days Journey 

//caps Lock

#include <bits/stdc++.h>
using namespace std;
bool checkAllUpper(string& s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            return false;
        }
    }
    return true;
}
bool checkFirst(string& s){
    int n=s.size();
    if(islower(s[0])){
        for(int i=1;i<n;i++){
            if(islower(s[i])){
                return false;
            }
        }
        return true;
    }
    return false;
}
string Swap(string& s){
    string res="";
    int n=s.size();
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            res+=(char)toupper(s[i]);
        }
        else{
            res+=(char)tolower(s[i]);
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    if(checkAllUpper(s) || checkFirst(s)){
        cout<<Swap(s);
    }
    else{
        cout<<s;
    }
}


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
