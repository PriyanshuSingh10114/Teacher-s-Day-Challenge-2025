//Beginner's Track

//Watermelon 800*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w>2 && w%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
return 0;
}

//Advanced Track

//Watermelon 800*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w>2 && w%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
return 0;
}

//Way Too Long Words 800*

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
