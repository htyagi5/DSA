#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    int i,j;
    // for(i=0;i<n;i++){
    // cout<<"*****";
    // cout<<"\n";
    // }
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<"* ";
}
    // cout<<"\n";
     cout<<endl;
    }
}
int main(){
    cout<<"ENTER NO OF testcase : ";
    int t;
    cin>>t;
    for(int i=0;i<t;t++){
    cout<<"ENTER NO OF ROWS : ";
     int n;
    cin>>n;
    pattern1(n);
    }
}