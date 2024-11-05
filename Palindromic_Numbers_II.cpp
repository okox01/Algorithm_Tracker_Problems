#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        string s;
        cin>>s;
        int len=s.size();
        bool ispalindrome=true;
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[len-i-1]){
                ispalindrome=false;
                break;
            }
        }
        if(ispalindrome){
            cout<<"Case "<<j<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<j<<": No"<<endl;
        }
    }

    return 0;
}