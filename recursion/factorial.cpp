#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    return n*fac(n-1);
}
int main(){
    int n;
    cout<<"enter the num :";
    cin>>n;
    cout<<"factorial is :"<<fac(n);
    return 0;
}