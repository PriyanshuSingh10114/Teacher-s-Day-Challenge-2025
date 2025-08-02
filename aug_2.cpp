//Beginner's Track

//231A. Team

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

//112A - Petya and Strings

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1<s2){
       cout<<"-1"<<endl;
    }
    else if(s1>s2){
        cout<<"1"<<endl;
    }
    else if(s1==s2){
        cout<<"0"<<endl;
    }

return 0;
}

//231A. Team

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
