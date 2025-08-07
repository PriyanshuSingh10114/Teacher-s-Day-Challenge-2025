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

#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[5][5];
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                row=i;
                col=j;
            }
        }
 
    }
    int ans=abs(row-2)+abs(col-2);
    cout<<ans<<endl;
return 0;
}



