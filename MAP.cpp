#include <iostream>
#include<map> 

using namespace std;
int main() {
  map<int,string> m;

  m[1]= "money";
  m[13]="goyal";
  m[2]="som";

  m.insert( {5,"xyz"});

  cout<<"before erase"<<endl; 
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl; // 1 money 2 som 5 xyz 13 goyal
  }

  cout<<"finding -13 -> " <<m.count(-13)<<endl; // 0

//  m.erase(13);
  cout<<"after erase"<<endl;
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl; // 1 money 2 som 5 xyz
  }cout<<endl<<endl;

  auto it = m.find(5);

  for(auto i=it;i!=m.end();i++) {
    cout<<(*i).first<<endl; // 5
  }

}

