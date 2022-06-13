/* Author: Ha Thanh Binh
    Date : 6/13/2021
*/
#include <iostream> // libraries of C++
#include <string>

using namespace std; // 
int main()
{
    // here is the first program i coded with c++ 
    cout << "htb is the best" << std::endl;
    cout << "alo ha ";

    cout << "hello word \n";
    cout << "ok my fen" << endl;

    // c++ variables
        // variables
        int myNum = 5; // integer (whole number without decimals)
        double myFloatNum = 5.99; // Floating point number (with decimals)
        char myLetter = 'D';// character
        string myText = "hello"; // string (text)
        bool myBoolean = true;
    
        // Display variables
        int myAge = 35;
        cout << "I am " << myAge << " years old. \n";

        // Add Var together
        int x = 5, y = 6;
        int sum = x + y;
        cout << sum << endl;

    // C++ User Input
    int a; 
    cout << "Type a number: ";          // Type a number and press enter
    cin >> a;                           // Get user input from the keyboard
    cout << "Your number is: " << a << endl;    // Display the input value

    // C++ String
        // string concatenation
        string firstName = "John ";
        string LastName = "Doe";
        string fullName1 = firstName + " " + LastName;
        cout << fullName1 << endl;

        string fullName2 = firstName.append(LastName);
        cout <<fullName2 << endl;
        // c++ numbers and strings, string length 
        string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cout << "the length of the txt string is: "<< txt.length() << endl;
        cout << txt.size() << endl; 
        cout << "chu cai thu "<< a << " la " << txt[a-1] << endl;
        // change string characters
        string myString = "hello";
        myString[0] = 'J';
        cout << myString << endl;

        // user input strings
        string fullName3;
        // string Name;
        cout << "Type your name: ";
        // cin >> Name;
        // cout << "your name is: "<< Name << endl;
        
        getline (cin, fullName3);
        cout << "your name is: " << fullName3 << endl;

    // C++ if...else
        int c,d;
        cout << "nhap gia tri x: ";
        cin >> c;
        cout << "nhap gia tri y: ";
        cin >> d;

        if( c > d)
        {
            cout << "x is bigger than y" << endl;
        }
        else if ( c == d ){
            cout << "x is equal to y" << endl;
        }
        else
        {
            cout << "x is less than y" << endl;
        }
        // variable = (condition) ? expressionTrue : expressionFalse;
        int time = 20;
        string results = ( time < 18 ) ? "Good day." : "Good evening.";
        cout << results << endl;
    // c++ switch case
        int day;
        cout << "nhap ngay thu: ";
        cin >> day;
        switch (day){
            case 1: 
                cout << "monday";
                break;
            case 2:
                cout << "tuesday";
                break;
            case 3:
                cout << "wednesday";
            case 4: 
                cout << "thursday";
                break;
            case 5:
                cout << "friday";
                break;
            case 6:
                cout << "saturday";
                break;
            default:
                cout << "please type from 1 to 6" ;
         }
    // c++ while loop
        int i = 0;
        while (i < 5){
            cout << i << "\n";
            i++;
        }
    // c++ do while loop
        int j = 0;
        do {
            cout << j << "\n";
            j++;
        }
        while (j < 5);
        cout << "exit";
    // C++ for loop
        for(int i =0; i<10; i++){
            if (i==6) break;
            cout << i << "\n";
        }
    // C++ Arrays
        string cars[4]={"Volvo", "BWM", "Ford", "Mazda"};
        cars[0] = "Opel";
        for (int i =0; i < 4; i++ ){
            cout << i+1 << ":" << cars[i] << "\n";
        }
        // c++ size
            long long myNumber[5]={10, 20, 30, 40, 50};
            cout << sizeof(myNumber) / sizeof(long long);
    // C++ structures
        struct{
            int myNum;
            string myString;

        } myStructure;

        myStructure.myNum = 1;
        myStructure.myString = "Hello word!";

        cout << myStructure.myNum <<"\n";
        cout << myStructure.myString << "\n";
    // C++ pointer
        string food = "Pizza";
        string *ptr = &food;

        cout << food << "\n";

        cout << &food << "\n";

        cout << *ptr << "\n";

        *ptr = "hamburger";

        cout << *ptr << "\n";

        cout << food;


    return 0;
}