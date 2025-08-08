//Beginner's Track

//A. Boy or Girl 236A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
 
    set<char>uniqueStr;
    for(char ch:str){
        uniqueStr.insert(ch);
    }
 
    int uniqueLength=uniqueStr.size();
 
    if(uniqueLength%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
return 0;
}


//Advanced Track

//A. Is your horseshoe on the other hoof? 228A

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        st.insert(n);
    }
    cout<<4-st.size()<<endl;
 
return 0;
}

//266B - Queue at the School

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
