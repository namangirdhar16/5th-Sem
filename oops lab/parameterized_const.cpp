#include <iostream>

using namespace std;
class vehicle {
    public: 
    string brand, name;
    int price;
    
    // parameterized constructor
    vehicle (string b, string n, int p) {
        cout << "parameterized constructor called!" << endl;
        brand = b;
        name = n;
        price = p;
    }
    void get() {
        cout << brand << " " << name << " " << price << endl;
    }
    
};
int main() {
   vehicle car("honda", "city", 1500000);
   car.get();
   
}