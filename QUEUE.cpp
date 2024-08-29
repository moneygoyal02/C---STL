#include <iostream>
#include<queue>

using namespace std;
int main() {
  
  queue<string> q;

  q.push("MONEY");
  q.push("GOYAL");
  q.push("SOU");

  cout<<"Size before pop " <<q.size()<<endl; // 3
  
  cout<<"First Element "<<q.front()<<endl; // MONEY
  q.pop();
  cout<<"First Element "<<q.front()<<endl; // GOYAL

  cout<<"Size after pop " <<q.size()<<endl;// 2

}






