

/* Author: Ha Thanh Binh
    Date : 6/27/2021
*/
#include <iostream> // libraries of C++
#include <string>

using namespace std; // 

// C++ function parameters pass by reference

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "befrore swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // call the function, which will chang the values of first and second

    swapNums(firstNum,secondNum);

    cout << "after swap: "<< "\n";
    cout << firstNum << secondNum << "\n";

    return 0;

}


Pass Arrays as function parameters 

void myFunction(int myNumber[5]){
    for (int i = 0; i < 5 ; i++){
        cout << myNumber[i] << "\n";
    }

}

int main(){
    int myNumbers[5] = {10,20,30,40,50};
    myFunction(myNumbers);
    return 0;

}