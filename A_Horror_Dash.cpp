#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int speed;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int max_speed=0;
        for(int i=0;i<n;i++){
            cin>>speed;
            max_speed=max(max_speed,speed);
        }
        cout<<"Case "<<i<<": "<<max_speed<<endl;
    }
    return 0;
}