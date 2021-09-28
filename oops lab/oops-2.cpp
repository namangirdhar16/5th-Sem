#include <iostream>
using namespace std;

class vehicle {
  private: 
  string name, brand;
  int kmDriven;
  bool driving;
  //static data member
  static int numVehicle;
  
  public:
  // explicit constructor
  vehicle() {
      numVehicle++;
      driving = false;
      cout << numVehicle << "'s constructor called!" << endl;
  }
  // explicit destructor
  ~vehicle() {
      numVehicle--;
      cout  << "destructor called and number of vehicles left is " << numVehicle << endl; 
  }
  // setter
  void setInfo(string Name, string Brand, int d, bool state) {
      name = Name;
      brand = Brand;
      kmDriven = d;
      driving = state;
  }
  // getter
  void getInfo() {
      cout << "name of vehicle is: " << name << ", brand is: " << brand << " and kmDriven is " << kmDriven << endl;
  }
  // static member function
  static void alert() {
      cout << "Make Sure to wear seat belt while driving!!" << endl;
      cout << endl;
  }
  // friends
  friend class subInfo;
  friend void isCarRunning(vehicle &v);
};
// definition of static data member
int vehicle::numVehicle = 0;

// friend Class
class subInfo{
   public: 
  
   void getInfo(vehicle &v) {
       cout << v.name << " " << v.brand << " " << v.kmDriven << " " << endl;
   }
};
// friend function
void isCarRunning(vehicle &car) {
    if(car.driving) {
        cout << "car named " << car.name << " is running" << endl;
    }
    else {
        cout << "car named " << car.name << " is not running" << endl;
    }
}
int main() {
    
   vehicle car[10];
   string initName = "car";
   string brandName = "brand";
   
   for(int i = 0; i < 10; i++) {
       string name = initName + char(i + '0');
       string brand = brandName + char(i + '0');
      // cout << name << " " << brand << endl;
       if(i % 2 == 0) {
         car[i].setInfo(name, brand, i * 100 + 10000, true);
         vehicle::alert();
       }
       else car[i].setInfo(name, brand, i * 100 + 10000, false);
       isCarRunning(car[i]);
       car[i].getInfo();
   }
   cout << endl;
   subInfo s;
   cout << "from subInfo friend class" << endl;
   s.getInfo(car[0]);
   cout << endl;
}