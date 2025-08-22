// Beginner's Track - 43 Days Journey

//Football 96A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int uc=0;
    int lc=0;
    for(char ch:s){
        if(isupper(ch)){
            uc++;
        }
        else if(islower(ch)){
            lc++;
        }
    }
    if(uc>lc){
       transform(s.begin(),s.end(),s.begin(),::toupper);
       cout<<s<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
 
return 0;
}
