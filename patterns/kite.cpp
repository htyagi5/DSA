#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    int i,j,k;
    for(i=0;i<n;i++){
       if(i<=n/2){
       for(j=0;j<n/2-i;j++){
         cout<<" ";
       }
       for(int k=0;k<2*i+1;k++)
       cout<<"*";
       cout<<endl;
       }
       else{
       for(int m=1;m<=i-n/2;m++){
        cout<<" ";
       }
       for(int l=2*(n-i)-1;l>0;l--){
        cout<<"*";
       }
       cout<<endl;
       }
    }
}
int main(){
    int t;
     cout<<"ENTER THE NO OF testcase : ";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"ENTER THE NO OF ROWS : ";
        cin>>n;
        pattern1(n);
    }
}