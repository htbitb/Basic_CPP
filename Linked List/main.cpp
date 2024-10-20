#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node(int value){
            this->value = value;
            this->next = nullptr;
        }
};

class LinkedList{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        void printList(){
            Node* temp = head;
            while(temp){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void get_head(){
            cout << "Head: "  << head->value << endl;
        }

        void get_tail(){
            cout << "Tail: " << tail->value << endl;
        }

        void get_length(){
            cout << "Length: " << length << endl;
        }

        void append(int value){
            Node* newNode = new Node(value);
            if (length == 0){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        void DeleteLast(){
            if (length == 0) return;
            if(head == tail){
                delete head;
                head = nullptr;
                tail = nullptr;
                length = 0;
                return;
            }
            Node* pre = head;
            Node* current = head;
            while(current->next){
                pre = current;
                current = current->next;
            }
            tail = pre;
            tail->next = nullptr;
            delete current;
            length--;
        }

        void prepend(int value){
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            length++;
        }

        void DeleteFirst(){
            if (length == 0) return;
            if (length == 1){
                delete head;
                head = nullptr;
                tail = nullptr;
                length = 0;
                return;
            }
            Node* temp = head;
            head = temp->next;
            delete temp;
            length--;
        }

        void get(int index){
            if (index >= length || index < 0){
                cout << "Index out of bounds" << endl;
                return;
            }
            Node* temp = head;
            while(index > 0){
                temp = temp->next;
                index--;
            }
            cout << temp->value << endl;
        }

        void set(int index, int value){
            if (index < 0 || index >= length){
                return;
            }
            Node* temp = head;
            while(index > 0){
                temp = temp->next;
                index--;
            }
            temp->value = value;
        }

        void insert(int index, int value){
            if(index < 0 || index > length){
                return;
            }
            if(index == 0){
                prepend(value);
                return;
            }
            if(index == length){
                append(value);
                return;
            }
            Node* newNode = new Node(value);
            Node* temp = head;
            while(index > 1){
                temp = temp->next;
                index--;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            length++;
        }

        void DeleteNode(int index){
            if(index < 0 || index >= length) return;
            if(index == 0){
                DeleteFirst();
                return;
            }
            if(index == length){
                DeleteLast();
                return;
            }
            Node* temp = head;
            Node* pre = head;
            while(index > 1){
                pre = temp;
                temp = temp->next;
                index--;
            }
            pre->next = temp->next;
            delete temp;
            length--;
        }
        
        ~LinkedList(){
            Node* temp = head;
            while(head){
                head = head->next;
                delete temp;
                temp = head;
            }
        }
};

int main(){
    LinkedList* myLinkedList = new LinkedList(4);
    myLinkedList->append(5);
    myLinkedList->append(6);
    myLinkedList->append(7);
    cout << "get index" << endl;
    myLinkedList->get(2);

    myLinkedList->printList();
    myLinkedList->get_head();
    myLinkedList->get_tail();
    myLinkedList->get_length();

    myLinkedList->DeleteLast();
    myLinkedList->printList();
    myLinkedList->get_head();
    myLinkedList->get_tail();
    myLinkedList->get_length();
    

    myLinkedList->prepend(3);
    myLinkedList->set(2, 9);
    myLinkedList->printList();
    myLinkedList->get_head();
    myLinkedList->get_tail();
    myLinkedList->get_length();

    myLinkedList->DeleteFirst();
    myLinkedList->insert(1, 15);
    myLinkedList->DeleteNode(2);
    myLinkedList->printList();
    myLinkedList->get_head();
    myLinkedList->get_tail();
    myLinkedList->get_length();

    return 0;
}

