#include<bits/stdc++.h>
using namespace std ;

/*void number(int i,int n){

if(i>n){
return ;
}
cout<< i<<" ";
number(i+1,n);
}
void reverse(int i,int n){

if(i<n){
return ;
}
cout<< i<<" ";
reverse(i-1,n);
}*/


void number(int i,int n){
if(i<1){
return ;
}
number(i-1,n);
cout<< i<<" ";
}
void reverse(int i,int n){
if(i>n){
return ;
}
reverse(i+1,n);
cout<< i<<" ";
}

int main(){
int i,n;
cout<< " enter the start :";
cin>>i;

cout<< endl<<" enter the end :";
cin>>n;
// number(i,n);
// cout<<endl;
// reverse(n,i);
number(n,n);
cout<<endl;
reverse(i,n);

return  0;
   }