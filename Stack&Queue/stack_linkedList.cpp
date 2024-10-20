#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;
    public:
        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class Stack{
    private:
        Node* top;
        int height;
    
    public:
        Stack(int value){
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        ~Stack(){
            Node* temp = top;
            while(temp!= nullptr){
                top = top->next;
                delete temp;
                temp = top;
            }
        }

        void printStack(){
            Node* temp = top;
            while(temp!=nullptr){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getTop() {cout << "Top:" << top->value << endl;}

        void getHeight() {cout << "Height:" << height << endl;}

        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
            height++;
        }

        int pop(){
            if(top == nullptr) return INT8_MIN;
            Node* temp = top;
            int val = top->value;
            top  = top->next;
            delete temp;
            height--;
            return val;
        }
};

int main(){
    Stack stack(5);
    stack.printStack();
    stack.getTop();
    stack.getHeight();

    stack.push(10);
    stack.push(15);
    stack.push(20);
    stack.push(25);
    stack.printStack();

    stack.pop();
    stack.printStack();

}