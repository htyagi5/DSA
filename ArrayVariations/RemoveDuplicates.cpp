// with this i learn after any vector ko hum clear karte hai (eg: if a is a vector a.clear()) then if we try to push
 //new values using for loop a[i]=something then it produce unexpected result so try it this way a.push_back(something)

#include<bits/stdc++.h>
using namespace std;
int remove(vector<int> &a){
    sort(a.begin(),a.end());
    int i=0;
     for(int k=1;k<a.size();k++){
        if(a[k]!=a[i]){
            a[i+1]=a[k];
             i++;
        }
     }
   return i+1;   
}
int main(){
    int i,n;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int result=remove(a);
      for(int  i = 0; i < result; i++)
      {
       cout<<a[i]<<" ";
    }
      
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// set<int> remove(vector<int> &a,int i,int j){
//     set<int> s;
//     for(int k=i;k<=j;k++){
//     s.insert(a[k]);   //it takes NlogN time and space =O(n);
//     }
//    return s;
// }
// int main(){
//     int i,n;
//     cin>>n;
//     vector<int> a(n);
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
    
//     set<int> s=remove(a,0,n-1);
//      for(auto it: s){
//          cout<<it<<" ";
//      }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void remove(vector<int> &a,int i,int j){
//     set<int> s;
//     for(int k=i;k<=j;k++){
//     s.insert(a[k]);
//     }
//    for(auto it:s){
//     cout<<it<<" ";
//    }
// }
// int main(){
//     int i,n;
//     cin>>n;
//     vector<int> a(n);
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     remove(a,0,n-1);
//     // for(i=0;i<n;i++){
//     //     cout<<a[i]<<" ";
//     // }
//     return 0;
// }


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> a;
//         a.push_back(nums[0]);
//         int index=1;
//      for(int i=1;i<nums.size();i++){
//         if(nums[i]!=nums[i-1]){
//             a.push_back(nums[i]);
//             index++;
//         }
//      }
//       nums.clear();
//       for(int i=0;i<a.size();i++){
//          nums.push_back(a[i]);
//       }
//     // nums=a;
//      return index; 
//     }
// };
