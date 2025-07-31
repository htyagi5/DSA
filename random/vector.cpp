#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    vector <int> v1={6,8,4,3};
    v.push_back(1);
    v.push_back(9);
    v.push_back(8);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    for(auto it: v)
    cout<<it<<" ";
    cout<<endl;
    cout<<*v.begin()<<" ";
    cout<<v.back()<<"  ";
    //or
    cout<<*(v.end()-1)<<endl;
    v.insert(v.begin(),10);
    v.insert(v.begin()+1,300);
    v.pop_back();
    v.erase(v.begin()+4,v.begin()+6);
    // v.clear();
    cout<<v.at(3)<<endl;
    //  v1.swap(v);

    
    for(auto it: v)
    cout<<it<<" ";
    
  return 0;
} 