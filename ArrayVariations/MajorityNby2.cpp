#include "bits/stdc++.h"
using namespace std;
//Brute force soln
// int Majority(vector<int> &a,int N){
//     for(int i=0;i<N;i++){
//         int count=0;
//         for(int j=0;j<N;j++){
//             if(a[j]==a[i]) count++;
//         }
//         if(count>N/2){
//             return a[i];
//         }
//     }
//     return -1;
// }
//Time complexity=O(N^2)

//Better soln=>(Hashing)
// Example: if your numbers are 1000000000 and -1000000000, the map keys will be exactly those two numbers.
// When you do hash[i], if i is not in the map, a new entry is inserted with value 0 — this is O(log N) and wastes time.
// This means for hash.size() calls, you may be doing many extra insertions that aren't needed.
//************************You should iterate over the actual key-value pairs in the map:************* */
// int Majority(vector<int> &a,int N){
//     map<int,int> hash;
//     for(int i=0;i<N;i++){
//         hash[a[i]]++;
//     }
   ////  for(int i=0;i<hash.size();i++){
   ////      if(hash[i]>N/2){
   ////          return i;
  // //      }
   // for(auto &it: hash){
   //      if(it.second>N/2){
   //          return it.first;
   //      }
   // }
//     return -1;
// }
//Time complexity=>O(N logN)(ordered map) or O(N)(unordered =best+avg)

//Optimal(Moore's voting algorithm)
int Majority(vector<int> &a,int N){
     int count=0;
     int el=a[0];
     for(int i=0;i<N;i++){
        if(el==a[i]) count++;
        else count--;
        if(count==0){
            el=a[i+1];
        }
     }
      count=0;
     for(int i=0;i<N;i++){
        if(el==a[i]) count++;
     }
     if(count<N/2){
        return -1;
     }
     return el;
}
//Time Complexity=O(N)+O(N) 
//space =>O(1)
int main(){
    vector<int> num={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n=num.size();
    int result=Majority(num,n);
    cout<<result;
    return 0;
}