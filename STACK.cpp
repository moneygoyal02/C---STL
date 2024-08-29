#include <iostream>
#include<stack>

using namespace std;
int main() {
  stack<string> s;

  s.push("MONEY");
  s.push("GOYAl");
  s.push("SOU");

  cout<<"Top Element-> "<<s.top()<<endl; // SOU

  s.pop();
  cout<<"Top Element-> "<<s.top()<<endl;  // GOYAL

  cout<<"size of stack "<<s.size()<<endl; // 2

  cout<<"Empty or not "<<s.empty()<<endl; // 0

}


