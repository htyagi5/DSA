#include<iostream>
using namespace std;
void pattern2(int n){
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
           
        }
        cout<<endl;
    }
}
void pattern3(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
           
        }
        cout<<endl;
    }
}
void pattern4(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<' ';
    }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"ENTER NO OF TESTCASE : ";
    cin>>t;
        for(int i=0;i<t;i++){
            int n;
                cout<<"ENTER NO OF  : ";
            cin>>n;
            pattern2(n);
        }
}