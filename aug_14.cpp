//Beginner's Track - 43 Days Journey

//Twins

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    
    sort(coins.begin(),coins.end(),greater<int>());

    int total=accumulate(coins.begin(),coins.end(),0);
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++){
        ans=ans+coins[i];
        count++;
        if(ans>total/2){
            break;
        }
    }
    cout<<count<<endl;
return 0;
}


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

