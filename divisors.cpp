 #include<bits/stdc++.h>
using namespace std;
void divisors(int i ){
     set<int> ls;
// for(int j=1;j<=sqrt(i);j++){
for(int j=1;j*j<=i;j++){   //this reduces the time complexity as sqrt func not called many times
// O(sqrt(i)) 
    if(i%j==0){
        ls.emplace(j);
        if(i/j!=j){
        ls.emplace(i/j);
        }
    }
}
// sort(ls.begin(),ls.end());  not required as we have used se data type instead ofn vector no need to sort
for(auto it: ls){  ///O(no of elements)
    cout<<it <<" ";
}
}
int main(){
    int  i;
    cout<<"ENETR THE NO : "<<endl;
    cin>>i;
    divisors(i);
    // vector<int> ls=divisors(i);
    return 0;
}