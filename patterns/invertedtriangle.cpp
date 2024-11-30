#include<iostream>
using namespace std;
void pattern1(int n){
    int i,j;
    for(i=0;i<n;i++){
    for(j=n-i;j>0;j--){
     cout<<"* ";
    }
    cout<<endl;
    }
}
void pattern2(int n){
    int i,j;
    for(i=0;i<n;i++){
    for(j=n-i;j>0;j--){
     cout<<j ;
    }
    cout<<endl;
    }
}
void pattern3(int n){
    int i,j;
    for(i=0;i<n;i++){
    for(j=1;j<n-i+1;j++){
     cout<<j <<" ";
    }
    cout<<endl;
    }
}
void pattern4(int n){
int i,j;
    for(i=1;i<=n;i++){
    for(j=n-i+1;j>0;j--){
     cout<<i <<" ";
    }
    cout<<endl;
    }
}

int main(){
    int t;
            cout<<"ENTER NO OF TESTCASE : ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"ENTER NO OF ROWS : ";
        cin>>n;
        pattern3(n);
    }  
}