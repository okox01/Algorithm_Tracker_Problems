#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        int buns,beef,chicken,hamburger_price,chicken_burger_price;
        
        while(t--){
        int price=0,price2=0;
        cin>>buns>>beef>>chicken;
        cin>>hamburger_price>>chicken_burger_price;
        
        
        if(buns<2){
            cout<<"0"<<endl;
        }
        else{
        if(chicken_burger_price>=hamburger_price){
        for(int i=1;i<=chicken;i++){
            if(buns>=2){
                price=i*chicken_burger_price;
                buns=buns-2;
            }
            else{
                break;
            }
        }
        for(int j=1;j<=beef;j++){
            if(buns>=2){
                price2=j*hamburger_price;
                buns=buns-2;
            }
            else{
                break;
            }
        }
        
        cout<<price+price2<<endl;
  }
  
  else{
    for(int j=1;j<=beef;j++){
            if(buns>=2){
                price2=j*hamburger_price;
                buns=buns-2;
            }
            else{
                break;
            }
        }
    for(int i=1;i<=chicken;i++){
            if(buns>=2){
                price=i*chicken_burger_price;
                buns=buns-2;
            }
            else{
                break;
            }
        }
        cout<<price+price2<<endl;
  }
        }

}
    return 0;
}