/* Author: Ha Thanh Binh
    Date : 6/27/2021
*/

#include<iostream>

using namespace std;


class MyClass {         // the class
    public:             // Access specifier
        int myNum;      // Attribute (int variable)
        string myString; // Attribute (string variable)
};

class car {
    public:
        string brand;
        string model;
        int year;
        int speed(int maxSpeed);

};
/* methods are fuctions that belong to the class.
there are two ways to define functions that belongs to a class:
    + Inside class definition
    + Outside class definition  */

// inside class definition 
class myFunction_in {
    public: 
        void myMethods(){
            cout << "hello work!";
        }
};


// outside class
class myFunction_out {
    public:
        void myMethod1();
};

void myFunction_out :: myMethod1(){
    cout << "ok my friend" << "\n";
}

int car :: speed(int maxSpeed){
    return maxSpeed;
}
int main(){
    MyClass myObj; //creat an object of Myclass

    // Access atributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = " X5";
    carObj1.year = 1999;

    car carObj2;
    carObj2.brand = "ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    myFunction_in myObj4; // method inside class
    myObj4.myMethods();
    cout << "\n";

    myFunction_out myObj5; // method outside class
    myObj5.myMethod1();

    car myObj6;             // add parameters
    cout << myObj6.speed(200);

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year;

    return 0;
}