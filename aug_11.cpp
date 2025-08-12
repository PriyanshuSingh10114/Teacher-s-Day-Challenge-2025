//Beginner's Track - 43 Days Journey

//A. Bit++

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int X=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="X++" ||s=="++X"){
            X++;
        }
        else if(s=="X--" ||s=="--X"){
            X--;
        }
    }
    cout<<X<<endl;
 
return 0;
}


//Advanced Track - 43 Days Journey

//A. Word Capitalization

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
