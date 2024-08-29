#include <iostream>
#include<deque>

using namespace std;
int main() {
  
  deque<int> d;

d.push_back(1);
d.push_front(2);

//d.pop_front();
cout<<endl;

cout<<"Print First INdex Element-> "<<d.at(1)<<endl; // 1

cout<<"front "<<d.front()<<endl; // 2
cout<<"back "<<d.back()<<endl;  // 1

cout<<"Empty or not " <<d.empty()<<endl; // 0

cout<<"before erase " <<d.size()<<endl; // 2
d.erase(d.begin(),d.begin()+1);
cout<<"after erase " <<d.size()<<endl; // 1
for(int i:d){
  cout<<i<<endl; // 1
}

}

