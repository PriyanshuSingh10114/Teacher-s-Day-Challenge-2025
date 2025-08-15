//Beginner's Track - 43 Days Journey

//Twins



//Advanced Track - 43 Days Journey

//Bit++  282A

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

// A. Even Odds 318 A

