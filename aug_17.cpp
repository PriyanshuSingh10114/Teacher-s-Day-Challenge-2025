// Beginner's Track - 43 Days Journey

//A. Soldier and Bananas

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;

    long long total=k*w*(w+1)/2;
    long long borrow=max(0LL,total-n);

    cout<<borrow<<endl;
return 0;
}
