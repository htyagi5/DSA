// doubt 


// #include<bits/stdc++.h>
// using namespace std;
// int fibo(int i,int n){
//    if(n<=1){
//    return n;
//    }
//    // else if(fibo(0,0)){
//    // return 1;
//    // }
//    // else if(fibo(1,0))
//    // return 1;
//    else{
//   return fibo(n-1,i)+fibo(n-2,i);
//    }
// }
// int main(){
//     int i;
//     int n;
//     cin>>n;
//  cout<<fibo(0,n);
//     return 0;
// } 


// #include<bits/stdc++.h>
// using namespace std;
// int fibo(int n){
//    if(n==1 || n==0){
//       return n;
//    }
//    else{
//       return fibo(n-1)+fibo(n-2);
//    }
// }
// int main(){
//    int i,n;
//    cin>>n;
// int result=fibo(n);
// cout<<result <<' ';
   
//    return 0;
// }


// or

#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
   if(n<=1){
      return n;
   }
   int last=fibo(n-1);
   int slast=fibo(n-2);

      return last+slast;
}
int main(){
   int i,n;
   cin>>n;
for(i=0;i<n;i++){
cout<<","<<i<<"th fibonacci no ="<<fibo(i);
}
    return 0;
 }



// ++++++++++++++++C program+++++++++++++++++

// #include<stdio.h>
// int feb(int n){
// if(n==1){
// return 0;
// }
// if(n==2){
// return 1;
// }
// else
// return feb(n-1)+feb(n-2);
// }
// int  main(){
//  int n;
//  printf("enter length of febonacci : ");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++)
//  printf("%d",feb(i));
//  return 0;
//  }
    