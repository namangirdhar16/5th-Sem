#include <iostream>

using namespace std;

class sayHello{
  public: 
  sayHello() {
      cout << "hello, constructor called!" << end;
  }
  ~sayHello() {
      cout << "hello, destructor called!!" << endl;
  }
};
int main() {
    sayHello s1;
    
}