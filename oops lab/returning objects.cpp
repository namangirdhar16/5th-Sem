#include <iostream>

using namespace std;
class group{
    public: 
    int marks;
    
    group add(group &g1) {
        group g3;
        g3.marks = g1.marks + marks;
        return g3;
    }
};
int main() {
   group g1, g2;
   g1.marks = 2;
   g2.marks = 3;
   group g3 = g1.add(g2);
   cout << g3.marks << endl;
}