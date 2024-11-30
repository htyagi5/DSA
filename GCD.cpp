//Euclidean METHOD GCD(a,b)==GCD(a-b,b)
//  here the time complexity is O(log n (min (i,j)))

#include<bits/stdc++.h>
using namespace std;
void gcd(int i ,int j){

    // int temp=0;
    // while(i>0){
    //  if(i>j){
    //   i=i%j;
    //  }
    //  else{
    //     temp=i;
    //     i=j;
    //     j=temp;
    //  } 
    // }
    // cout<<"GCD IS : "<<j;
    while(i>0 && j>0){
     if(i>j){
      i=i%j;
     }
     else{
        j=j%i;
     }
    }
    if(i==0){
    cout<<"GCD IS : "<<j;
    }
    else{
        cout<<"GCD IS : " <<i;
    }
}
int main(){
    int i,j;
    cout<<" enter two no to pass : ";
    cin>>i >>j;
    gcd(i,j);
    return 0;
}