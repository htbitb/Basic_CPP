#include <iostream>
#include <vector>

using namespace std;

class Stack{
    private:
        vector<int> stackVectors;

    public:
        vector<int>& getStackVector() {return stackVectors;}

        void print_stack(){
            for (int i = 0; i < stackVectors.size();; i++){
                cout << stackVectors[i] << endl;
            }
        }

        bool isEmpty(){
            return stackVectors.size() == 0;
        }

        int peek(){
            if(stackVectors.size() == 0) return int();
            return stackVectors[stackVectors.size()-1];
        }

        void push(int value){
            stackVectors.push_back(value);
        }

        void pop(){
            stackVectors.pop_back();
        }
};