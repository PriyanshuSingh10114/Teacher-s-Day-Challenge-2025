//Beginner's Track

//Petya and Strings //112A

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

//Advance Track

//Boy or Girl

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
