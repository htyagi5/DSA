#include<iostream>
using namespace std;
void pattern1(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
             if(j%2==0)
             cout<<"1";
             else
             cout<<"0";
            }       
        else{
             if(j%2==0)
             cout<<"0";
             else
             cout<<"1";

        }
        
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
            cout<<"ENTER NO OF rows : ";
          cin>>n;
          pattern1(n);
    }

}