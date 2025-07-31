#include<bits/stdc++.h>
using namespace std;

//Brute force
// int LongSub(vector<int>a,int k){
//     int len=a.size();
//     int longi=0;
//     for(int i=0;i<len;i++){
//      int count=0;
//      int sum=0;
//       for(int j=i;j<len;j++){
//        sum+=a[j];
//        count++;
//         if(sum>k){
//           count=0;
//           break;
//         }
//        else if(sum==k){
//         for(int l=j+1;j<len;l++){
//           if(a[l]==0){
//             count++;
//           }
//           else{
//             break;
//           }
//         }
//         break;
//        }
//       }
//       if(longi<count){
//         longi=count;
//       }
//    }
//    return longi;
// }

int LongSub(vector<int>a,int k){
   
}

int main(){
  vector<int> v={1,2,3,1,1,1,0,0,4,2,3};
  int k;
   cin>>k;
  int result= LongSub(v,k);
  cout<<"longest subarray:"<<result<<endl;
}