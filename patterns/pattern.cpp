#include<iostream>
using namespace std;
void pattern1(int n){
    int k,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern2(int n){
    int k,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=n;k>n-i;k--)
        cout<<k;
        cout<<endl;
    }
}
int main(){
    int t;
cout<<"Enter no of testcase : ";
    cin>>t;
for(int i=0;i<t;i++){
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;
    pattern1(n);
    pattern2(n);
}

}