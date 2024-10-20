#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class Queue{
    private:
        Node* first;
        Node* last;
        int length;

    public:
        Queue(int value){
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length = 1;
        }

        ~Queue(){
            while(first != nullptr){
                Node* temp = first;
                first = first->next;
                delete temp;
            }
        }
        void print_queue(){
            Node* temp = first;
            while(temp){
                cout << temp->value <<endl;
                temp = temp->next;
            }
        }
        void enqueue(int value){
            Node* newNode = new Node(value);
            if(first == nullptr){
                first = newNode;
                last = newNode;
            }
            else{
                last->next = newNode;
                last = newNode;
            }
            length++;
        }

        int dequeue(){
            if(first == nullptr) return int();
            Node* temp = first;
            int val = temp->value;
            first = first->next;
            delete temp;
            length--;
            return val;
        }
};

int main(){
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(15);
    queue.enqueue(20);
    queue.enqueue(25);

    queue.print_queue();

    cout << "Dequeued: " << queue.dequeue() << endl;
    queue.print_queue();
}