//Pairs

#include<bits/stdc++.h>
using namespace std;
int main() {
/*
    pair<int,int> v={32,45};
    cout<<v.first<<" "<<v.second<<endl;
    //pair inside pair
    pair<int,pair<int,int>> v1={12,{14,15}};
    cout<<v1.first<<" "<<v1.second.first<<" "<<v1.second.second<<endl;
    return 0;
}
*/

//CONTAINERS
//VECTORS

/*int main()
{    vector<int>v(5,10);
      v.emplace_back(35);
      for(int i=0;i<6;i++){
      cout<<v[i]<<endl;
      }
    cout << "Hello World!" << endl;
   vector<int>v1(5,34);
     // doubt v.emplace_back(35,36);
    v1.emplace_back(35);
   v1.emplace_back(36);
      for(int j=0;j<7;j++){
      cout<<v1[j]<<endl;
      }
     // copying one vector to another
     vector<int>v2(v1);
      for(int j=0;j<7;j++){
      cout<<v2[j]<<endl;
      }*/

//iterators

/*
{      vector<int> v2(7,4);
      cout<<"Hello"<<endl;
       vector<int>::iterator it=v2.begin()+5;
       cout<<*(it)<<endl;
       it++;
       cout<<*(it)<<endl;
       vector<int>::iterator ir=v2.end();
       cout<<*(ir)<<endl;
       ir--;
      cout<<*(ir)<<endl;
      cout<<"hello"<<endl;
      vector<int> arr;
      arr.push_back(1);
     arr.push_back(2);
    arr.push_back(3);
   arr.push_back(4);
  arr.push_back(5);

     vector<int>::reverse_iterator is=arr.rend();
     is--;
     cout<<*(is)<<endl;
    vector<int>::reverse_iterator iu=arr.rbegin();
    cout<<*(iu)<<endl;
    cout<<arr.back()<<endl;
   cout<<"hello"<<endl;
    for(vector<int>::iterator iu=arr.begin();iu!=arr.end();iu++){
    cout<<*(iu)<<endl;
    }
    //or
    cout<<"hello"<<endl;
    for(auto iu=arr.begin();iu!=arr.end();iu++){
    cout<<*(iu)<<endl;
    }
   //or
   cout<<"hello"<<endl;
  for(auto iu:arr){
    cout<<iu<<endl;
    }
    */

     //deletion of element in dynamic array
  /*
      cout<<"hello"<<endl;
     vector<int> a(1,12);
     a.push_back(13);
    a.push_back(14);
   a.push_back(15);
  a.push_back(16);
  //{12,13,14,15,16}
     a.erase(a.begin()+2);
     for(auto i=a.begin();i!=a.end();i++){
     cout<<*(i)<<endl;
     }
     cout<< "hello"<<endl;
    //{12,13,15,16}
    a.erase(a.begin()+1,a.begin()+3); // {12,16}
   for(auto i=a.begin();i!=a.end();i++){
     cout<<*(i)<<endl;
     }
     //size of vector
     a.size();
     a.empty();
     a.clear();
    for(auto i=a.begin();i!=a.end();i++){
     cout<<*(i)<<endl;
     }
  */

 //Insertion

 /*cout<<"hello"<<endl;
 vector<int> v={23,54,76,24,76,98};
//  cout<<"ARRAY IS : {";
//  for(auto i=v.begin();i<v.end();i++){
//   cout<<*(i)<<" ";
//   cout<<",";
//  }
// cout<<"}";
//insert an element in array
// v.insert(v.begin()+2,25);
v.insert(v.begin()+2,3,25);
for(auto i=v.begin();i<v.end();i++){
  cout<<*(i)<<" ";
}
cout<<endl;
 vector<int> s={12,54,76,99};
 //insert in s vector
 s.insert(s.begin()+1,v.begin()+2,v.end()-1);
 cout<<"ARRAY IS : {";
 for(auto i=s.begin();i<s.end();i++){
  cout<<*(i)<<" ";
  cout<<",";
 }
 cout<<"}";
 //size
 cout<<"size of vector s : "<<s.size()<<endl;
 //delete last element of vector s
s.pop_back();
//swap two vectors
vector<int>v1={23,67};
vector<int> v2={55,57};
v1.swap(v2);

//erase complete vector
v.clear();
cout<<v.empty()<<endl;;//indicate whether vector is empty or not
  
  //List
//same as vector
list<int> ls={23,34,56,77};


//DEQUE
//same as vector

//STACK    =last element is the first element 
//stack<int> st={12,13,14,15}; this way  of initializing is wrong as we have to push element one by one 
 stack<int> st;
 st.push(12);
 st.push(89);
 st.push(76);
 st.push(43);
 cout<<st.top()<<endl;
//  st.pop_back(); this is not member in stack
st.pop();//vanish top element
cout<<st.top()<<endl;
cout<<st.size()<<endl;
cout<<st.empty()<<endl;
//swap function can also be used
  

  //QUEUE   = first element enter is the  first element as usual

  // queue<int> q={1,2,3,4}; this also wrong way same reason as of stack
  queue<int> q;
 q.push(12);
 q.push(89);
 q.push(76);
 q.push(43);
q.back()+=5;//ad  5 in last element 
cout<<q.back()<<endl;
cout<<q.front()<<endl;
 

 //PRIORITY QUEUE

//maximum heap
 priority_queue<int> pq;//it always put largest at top
 pq.push(12);
 pq.push(89);
 pq.push(76);
 pq.push(43);
 cout<<pq.top()<<endl;
 
//  minimum heap
priority_queue<int,vector<int>,greater<int>> PQ;
PQ.push(67);
 PQ.push(56);
 PQ.push(12);
 PQ.push(43);
 cout<<PQ.top()<<endl;

*/
 //SET     == sort and unique

cout<<"hello"<<endl;
//Mapping
 /*int main() {
    map<int,int> mpp;
    mpp.insert({2,7});
    mpp.insert({5,3});
    mpp.emplace(1,4);
    mpp[5]=6;
    for(auto it: mpp) {
        cout<<it.first<<" "<<it.second<<endl;
    }
    // or
    /* map<pair<int,int>,int> mpp;
    //  or
  map< int,pair<int,int >> mpp;
    mpp[3]={2,3};
    mpp[3]={3,5};
    mpp[8]={1,5};
    for(auto it: mpp) {
        cout<< it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }
    */
   


   //MULTIMAP    == it store duplicate keys same as map

   //UNORDERED MAP   === it store unique keys but not sorted

  
    return 0;
}
    