/* Author: Htb
    Date : 06/29/2022 
 this file include 1)  Encapsulation
                   2)  inheritance
*/

#include <iostream>
using namespace std;

class Employee {
    // private:
  protected:
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

// base class
class Vehicle {
    public:
        string brand = "ford";
        void honk(){
            cout << "tuut, tuut! \n";
        }
};
// derived class (child)
class Car : public Vehicle {
    public:
        string model = "Mustang";
        int year(int y){
            return y;
        }
};

// Derived class (grandchild)

class Car_child : public Car, public Employee {
};


int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout<<myObj.getSalary() << "\n";
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model << "\n";
  Car_child myObj1;
  cout << myObj1.brand << " " << myObj1.year(1999) << "\n";
  myObj1.honk();
  return 0;
}