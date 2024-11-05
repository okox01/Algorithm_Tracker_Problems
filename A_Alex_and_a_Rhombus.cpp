#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1,z=5;
    if(n==1){
            cout<<x<<endl;
        }
        else if(n==2){
            cout<<z<<endl;
        }
    for(int i=3;i<=n;i++){
            z=z+4*(i-1);
            if(i==n){
             cout<<z<<endl;
            }
        }   
    return 0;
}