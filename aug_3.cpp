//Beginner's Track

//Next Round 158A

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

//Advanced Track

// Nearly Lucky Number 110A

#include<bits/stdc++.h>
using namespace std;
bool islucky(int num){
    string s=to_string(num);
    for(char c:s){
        if(c != '4' && c !='7'){
            return false;
        }
        return true;
    }
}
int main(){
    string n;
    cin>>n;
    int count=0;
    for(char digit:n){
        if(digit=='4' || digit=='7'){
            count++;
        }
    }
 
    if(count > 0 && islucky(count)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
return 0;
}


// A. Helpful Maths 339A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>ans;
    for(int i=0;i<s.size();i=i+2){
        ans.push_back(s[i]-'0');
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(i!=0){
            cout<<"+";
        }
        cout<<ans[i];
    }
    cout<<endl;
 
return 0;
}
