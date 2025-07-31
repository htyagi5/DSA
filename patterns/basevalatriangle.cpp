#include<iostream>
using namespace std;
void pattern1(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
           cout<<" ";
        }   
        for(int k=0;k<2*i+1;k++)
        {
            cout<<"*";

        }
        cout<<endl;
         }
}
 void pattern2(int n){
    int i,j;
    for(i=n;i>0;i--){
        for(j=0;j<n-i;j++){
           cout<<" ";
        }   
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";

        }
        cout<<endl;
         }
}

 int main(){
    int t;
        cout<<"ENTER NO OF testcsae : ";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"ENTER NO OF ROWS : ";
        cin>>n;
        pattern2(n);
    }
}