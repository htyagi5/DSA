#include<iostream>
using namespace std;
void pattern1(int n){
    int i,j;
    for(i=n-1;i>0;i--){
        for(j=i;j>0;j--){
        cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
           
        }
        cout<<endl;
    }
}
 int main(){
    int t;
    cout<<"ENTER NO OF TESTCASE :  ";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
            cout<<"ENTER NO OF Rows :  ";
             cin>>n;
             pattern2(n);
             pattern1(n);
    }
}