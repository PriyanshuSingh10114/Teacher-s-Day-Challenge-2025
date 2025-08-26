
//Beginner's Track - 43 Days Journey

//A. Nearly Lucky Number

#include<bits/stdc++.h>
using namespace std;
bool islucky(int num){
    string s=to_string(num);
    for(char c:s){
        if(c != '4' && c !='7'){
            return false;
        }
        return true;
    }
}
int main(){
    string n;
    cin>>n;
    int count=0;
    for(char digit:n){
        if(digit=='4' || digit=='7'){
            count++;
        }
    }
 
    if(count > 0 && islucky(count)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
return 0;
}
