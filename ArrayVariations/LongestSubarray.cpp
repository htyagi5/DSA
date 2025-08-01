#include "bits/stdc++.h"
using namespace std;

//Brute force
// int LongSub(vector<int>&a,int k){
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
//Time complexity=>O(N^2)  and space complexity=>O(1)


//Better Soln for positives as well for zero and negatives =>Hashing
// int LongSub(vector<int> &a,int k){
//   map<long long,int> prefixSum;
//    long long sum=0;
//    int maxlen=0;
//    int len=a.size();
//    for(int i=0;i<len;i++){
//     sum+=a[i];
//     if(sum==k){
//      maxlen=max(maxlen,i+1);
//     }
//     long long rem=sum-k;
//     if(prefixSum.find(rem)!=prefixSum.end()){
//       int lengt=i-prefixSum[rem];
//        maxlen=max(maxlen,lengt);
//     }
//     if(prefixSum.find(sum)==prefixSum.end())
//     prefixSum[sum]=i;
//    }
//    return maxlen;
// }
//Time complexity=>O(N logN) && for unordered =>O(N)(bestcase) and O(N^2) for worst  and space complexity=>O(N)


//Optimal approach (for zeroes and positives) =>2 pointer aproach
int LongSub(vector<int> &a,int k){
   int maxlen=0;
   int len=a.size();
   int left=0;
   int right=0;
   long long sum=a[0];
   while(right<len){
      while(left<=right && sum>k){
        sum -=a[left];
        left++;
      }
      if(sum==k){
        maxlen=max(maxlen,right-left+1);
      }
      right++;
      if(right<len)
      sum+=a[right];
   }
   return maxlen;
}
//Time complexity=>O(2N)  and space complexity=>O(1)
int main(){
  vector<int> v={1,9,10,1,1,1,0,0,4,3,1};
  int k;
  cin>>k;
  int result= LongSub(v,k);
  cout<<"longest subarray:"<<result<<endl;
}


// *******************Doubt***************************
// //Optimal approach (for zeroes and positives) =>2 pointer aproach
// int LongSub(vector<int> &a,int k){
//    int maxlen=0;
//    int len=a.size();
//    int i=0;
//    long long sum=0;
//     for(int j=0;j<len;j++){
//        sum+=a[j];
//        if(sum==k){
//         maxlen=max(maxlen,j-i+1);
//        }
//        else if(sum>k){
//         sum=sum-a[j];
//         j--;
//         i++;
//         sum=sum-a[i];
//        }
//     }
//    return maxlen;
// }