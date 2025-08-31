//Beginner's Track - 43 Days Journey

//A. Panoramix's Prediction 80A

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    int next=n+1;
    while(!isPrime(next)){
        next++;
    }
    if(next==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
