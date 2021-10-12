#include <iostream>

using namespace std;

class group{
   public: 
   int marks;  
   group(int m) {
       marks = m;
   } 
   void add(group &g2) {
       marks += g2.marks;
   }
}
int main() {
    group g1(10);
    group g2(3);
    g2.add(g1);
    cout << g2.marks << endl;
}