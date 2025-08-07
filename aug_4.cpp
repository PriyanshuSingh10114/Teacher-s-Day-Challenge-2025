//Beginner's Track

//A. String Task 118A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
 
    unordered_set<char>vowels={'A','E','I','O','U','Y','a','e','i','o','u','y'};
    string result;
 
    for(char c:s){
        if(vowels.count(c)){
            continue;
        }
        else{
            result+='.';
            result+=tolower(c);
        }
    }
    cout<<result;
return 0;
}

//Advanced Track

//A. George and Accommodation

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(p<q && q-p >=2){
            count++;
        }
    }
    cout<<count<<endl;
 
return 0;
}

//A. Word 59A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int uc=0;
    int lc=0;
    for(char ch:s){
        if(isupper(ch)){
            uc++;
        }
        else if(islower(ch)){
            lc++;
        }
    }
    if(uc>lc){
       transform(s.begin(),s.end(),s.begin(),::toupper);
       cout<<s<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }

return 0;
}
