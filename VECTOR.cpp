#include <bits/stdc++.h>    
using namespace std;
int main() {
  
  vector<int> v;

  vector<int> a(5,1);

  vector<int> last(a);
  
   cout<<"print last"<<endl;
  for(int i:last) {
    cout<<i<<" ";       // 1 1 1 1 1
  }cout<<endl;

  cout<<"Capacity-> "<<v.capacity()<<endl; // 0

  v.push_back(1);
  cout<<"Capacity-> "<<v.capacity()<<endl; // 1

  v.push_back(2);
  cout<<"Capacity-> "<<v.capacity()<<endl; // 2

  v.push_back(3);
  cout<<"Capacity-> "<<v.capacity()<<endl; //  the vector now has 3 elements, but the capacity becomes 4 because the vector increased its capacity in anticipation of future growth, so it doesn't need to reallocate memory on every push_back.
  cout<<"Size-> "<<v.size()<<endl;   // 3

  cout<<"Elemetn at 2nd Index " <<v.at(2)<<endl; // 3

  cout<<"front " <<v.front()<<endl; // 1
  cout<<"back " <<v.back()<<endl; // 3

 cout<<"before pop"<<endl;
  for(int i:v) {
    cout<<i<<" ";   // 1 2 3
  }cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v) {
    cout<<i<<" "; // 1 2
  }

  cout<<"before clear size "<<v.size()<<endl; // 2
  v.clear();
  cout<<"after clear size "<<v.size()<<endl; // 0



}
