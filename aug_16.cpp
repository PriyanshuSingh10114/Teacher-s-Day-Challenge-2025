//Beginner's Track - 43 Days Journey

//Elephant

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int moves=n/5;
    if(n%5!=0){
        moves++;
    }

    cout<<moves<<endl;

return 0;
}
