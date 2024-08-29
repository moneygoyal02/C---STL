#include <iostream>
#include<queue>

using namespace std;
int main() {
  //max heap
  priority_queue<int> maxi;

  //min - heap
  priority_queue<int,vector<int> , greater<int> > mini;

  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  cout<<"size-> "<<maxi.size()<<endl; // 4
  int n = maxi.size();
  for(int i=0;i<n;i++) {
    cout<<maxi.top()<<" "; // 3 2 1 0
    maxi.pop();
  }cout<<endl;

  mini.push(5);
  mini.push(1);
  mini.push(0);
  mini.push(4);
  mini.push(3);

  int m = mini.size();
  for(int i=0;i<m;i++) {
    cout<<mini.top()<<" "; // 0 1 3 4 5
    mini.pop();
  }cout<<endl;

cout<<"khaali h kya bhai  ?? -> "<<mini.empty()<<endl; // 1


}
