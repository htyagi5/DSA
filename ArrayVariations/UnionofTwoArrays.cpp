#include <bits/stdc++.h>
using namespace std;
//TIME COMPLEXITY => O(n1+n2)//not include sorting part
//Space complexity O(n1+n2)
vector<int> Union(vector<int> &a,vector<int> &b){
 sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   int m=a.size();
   int n=b.size();
   vector<int>c;
   int i=0;
   int j=0;
   while(i<m && j<n){
      if(a[i]<=b[j]){
     if(c.size()==0||c.back()!=a[i])
     c.push_back(a[i]);
     i++;
   }
   else {
      if(c.size()==0||c.back()!=b[j])
      c.push_back(b[i]);
      j++;
   }
}
if(i!=m){
      for(int k=i;k<m;k++){
         if(c.size()==0||c.back()!=a[j])
         c.push_back(a[k]);
      }
   }
   else {
      for(int k=j;k<n;k++){
         if(c.size()==0||c.back()!=b[j])
         c.push_back(b[k]);
      }
   }
   return c;
}
int main(){
   vector<int>n1={1,1,3,2,6,5};
  vector<int>n2={2,4,3,9,0,5};
 vector<int>result=Union(n1,n2);
 for(auto it:result){
   cout<<it<<" ";
 }
}

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> Union(vector<int> &a,vector<int> &b){
//    sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    int m=a.size();
//    int n=b.size();
//    vector<int>c;
//    int i=0;
//    int j=0;
//    while(i!=m && j!=n){
//       if(a[i]<b[j]){
//          if(c.size()==0||c.back()!=a[i])
//          c.push_back(a[i]);
//          i++;
//       }
//       else if(a[i]==b[j]){
//          if( c.size()==0||c.back()!=a[i])
//          c.push_back(a[i]);
//          i++;
//          j++;
         
//       }
//       else{
//          if(c.size()==0||c.back()!=b[j])
//          c.push_back(b[j]);
//          j++;
//       }
//    }
//    if(i!=m){
//       for(int k=i;k<m;k++){
//          if(c.size()==0||c.back()!=a[j])
//          c.push_back(a[k]);
//       }
//    }
//    else {
//       for(int k=j;k<n;k++){
//          if(c.size()==0||c.back()!=b[j])
//          c.push_back(b[k]);
//       }
//    }
// return c;
// }
// int main(){
//   vector<int>n1={1,1,3,2,6,5};
//   vector<int>n2={2,4,3,9,0,5};
//  vector<int>result=Union(n1,n2);
//  for(auto it:result){
//    cout<<it<<" ";
//  }
//  return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
//    vector<int> findUnion(vector<int> &a, vector<int> &b) {
//       set<int> st;
//       for(int i=0;i<a.size();i++)
//       st.insert(a[i]);
//       for(int i=0;i<b.size();i++)
//       st.insert(b[i]);
//       vector<int> U;
//       U.insert(U.begin(),st.begin(),st.end());
//       return U;
//     }
// int main(){
//     int i,n,m;
//     cin>>n;
//     cin>>m;
//     vector<int> a(n);
//     vector<int> b(m);
//     cout<<"Array A :";
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Array B :";
//     for(i=0;i<m;i++){
//         cin>>b[i];
//     }
//    vector<int> U= findUnion(a,b);
//      for(i=0;i<U.size();i++){
//         cout<<U[i]<<" ";
//      }
    
//     return 0;
// }

//TIME COMPLEXITY => O(nlog(n)+mlog(m))+O(n+m)
//Space complexity O(n+m)+O(n)
                          //extra space for Union vector