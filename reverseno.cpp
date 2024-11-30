#include<bits/stdc++.h>
using namespace std ;
int reverse(int x){
int reverse=0,y;
while(x!=0){
y=x%10;
x=x/10;
reverse=(reverse*10)+y;
}

return reverse;
}
int count(int x){
return log10(x)+1;
}

int main(){
    int x;
    cout<<"enter the no : "<<endl;
    cin>>x;
    int result=reverse(x);
  //int result=count(x);
    cout<<result<<endl;
   return 0;
}

    //we can take function name same as variable name