//Beginner's Track 

//Word Capitalization 281A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
 
    if(!str.empty() && islower(str[0])){
        str[0]=toupper(str[0]);
    }
    cout<<str<<endl;
return 0;
}
