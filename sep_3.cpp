
//Beginner's Track - 43 Days Journey

//Young Physicst

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum_of_x=0;
    int sum_of_y=0;
    int sum_of_z=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        sum_of_x+=x;
        sum_of_y+=y;
        sum_of_z+=z;
    }
    if(sum_of_x==0 && sum_of_y==0 && sum_of_z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
 
return 0;
}
