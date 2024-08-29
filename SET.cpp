#include <iostream>
#include<set>

using namespace std;
int main() {
  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(0);

  for(auto i : s) {
    cout<<i<<" "; // 0 1 5 6
  }cout<<endl;

set<int>::iterator it = s.begin();
it++;

  s.erase(it);

  for(auto i : s) {
    cout<<i<<endl;  // 0 5 6
  }
cout<<endl;
cout<<"-5 is present or not -> "<<s.count(-5)<<endl; // 0 

set<int>::iterator itr = s.find(5);

for(auto it=itr;it!=s.end();it++) {
  cout<<*it<<" "; // 5 6
}cout<<endl;

}
