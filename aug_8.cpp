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
