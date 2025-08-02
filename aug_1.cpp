//Beginner's Track

//Way Too Long Words

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string word;
        cin>>word;

        if(word.length()>10){
            cout<<word[0]<<word.length()-2<<word.back()<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
return 0;
}

//Advanced Track

//Next Round

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>result(n);
    for(int i=0;i<n;i++){
        cin>>result[i];
    }
    int count=0;
    int kth_score=result[k-1];
    for(int i=0;i<n;i++){
        if(result[i]>=kth_score && result[i]>0){
            count++;
        }
    }
    cout<<count;
 
return 0;
}

//Beautiful Matrix



