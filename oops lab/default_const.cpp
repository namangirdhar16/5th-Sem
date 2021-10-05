#include <iostream>

using namespace std;
class vehicle {
    public: 
    string brand, name;
    int price;
    
    vehicle() {
        cout << "default constructor called!" << endl;
    } 
    void set(string b, string n, int p) {
        brand = b;
        name = n;
        price = p;
    }
    void get() {
        cout << brand << " " << name << " " << price << endl;
    }
    
};
int main() {
   vehicle car;
   car.set("honda", "city", 1500000);
   car.get();
   
}