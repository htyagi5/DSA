#include<bits/stdc++.h>
using namespace std ;

void revarr(int s,int l ,int a[],int n){
int temp=0;
 if(s>l) {
 return ;
 }
temp= a[s];
a[s]=a[l];
a[l]=temp;
revarr(s+1,l-1,a,n);
}
int main(){
int i,n;
cout<<"enter the size of array: ";
cin>>n;
int a[10];
for(i=0;i<n;i++)
cin>>a[i];
revarr(0,n-1,a,n );
cout<<" enter the elements of array : ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

return  0;
   }
   
  //  void revarr(int i,int a[],int n){
  //  if(i>n/2)
  //  return ;
   
  //  swap(a[i],a[n-i-1]);
  //  revarr(i+1,a,n);
  //  }
  //  int main(){
   
  //  int n;
  //  cout<<"ENTER THE SIZE OF ARRAY : ";
  //  cin>>n;
  //  int a[10];
  // cout<<"ENTER THE  ARRAY elements: ";
  //  for(int i=0;i<n;i++)
  //  cin>>a[i];
  //  revarr(0,a,n);
  //  cout<<"reverse array is : ";
  // for(int i=0;i<n;i++)
  //  cout<<a[i]<<" ";
   
  //  return 0 ;
  //  }