#include <iostream>

using namespace std;
class vehicle {
    public: 
    string brand, name;
    int price;
    // copy constructor
    
    vehicle(vehicle &a) {
        brand = a.brand;
        name = a.name;
        price = a.price;
    }
    vehicle(string b, string n, int p) {
        brand = b;
        name = n;
        price = p;
    }
    void get() {
        cout << brand << " " << name << " " << price << endl;
    }
    
};
int main() {
   vehicle car1("honda", "city", 1500000);
   car1.get();
   vehicle car2 = car1;
   car2.get();
   
}