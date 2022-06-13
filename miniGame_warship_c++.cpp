#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main(){
    srand(time(NULL));
    string myChoice;
    cout << "type your choose: ";
    cin >> myChoice;
    cout << "\n" << "----------------" << endl;
    cout << "you choose: " << myChoice << "\n";
    int i;
    string computer;
    i = rand() % 3 + 1;
    if(i == 1){
        computer = "keo";
    }
    else if(i == 2){
        computer = "la";
    }
    else computer = "bua";

    cout << "computer choose " << computer;
    cout << "\n" << "----------------" << endl;

    if (myChoice == computer){
        cout << "raw!!";
    }
    else if (myChoice == "la"){
        if (computer == "bua")
        {
            cout << "you win !!";
        }
        else cout << "computer win !!";
        
    }
    else if (myChoice == "bua"){
        if (computer == "keo")
        {
            cout << "you win !!";
        }
        else cout << "computer win !!";
        
    }
    else if (myChoice == "keo"){
        if (computer == "la")
        {
            cout << "you win !!";
        }
        else cout << "computer win !!";
        
    }
    cout << "\n";

    return 0;

    

}