
//Beginner's Track - 43 Days Journey

//Translation

#include<bits/stdc++.h>
using namespace std;
string reverseString(string &s){
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;

    if(reverseString(s)==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}

//Advanced Track - 43 Days Journey
