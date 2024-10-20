#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
        string key;
        int value;
        Node* next;

        Node(int value, string key){
            this->value = value;
            this->key = key;
            this->next = nullptr;
        }
};

class HashTable{
    private:
        static const int size = 7;
        Node* dataMap[size];

        int hash(string key){
            int hash = 0;
            for(int i = 0; i < key.length(); i++){
                int ASCIIValue = int(key[i]);
                hash = (hash + ASCIIValue * 23) % size ; 
            }
            return hash;
        }
    
    public:
        HashTable(){
            for(int i = 0; i < size; i++){
                dataMap[i] = nullptr;
            }
        }

        ~HashTable(){
            for(int i =0; i < size; i++){
                Node* head = dataMap[i];
                Node* temp = head;
                while(head){
                    head = head->next;
                    delete temp;
                    temp = head;
                }
            }
        }

        void printTable(){
            for(int i = 0; i < size; i++){
                if(dataMap[i]){
                    cout << "Index: " << i << endl;
                    Node* head = dataMap[i];
                    while(head){
                        cout << "Key: " << head->key << ", Value: " << head->value << endl;
                        head = head->next;
                    }
                    cout << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
        }

        void set(string key, int value){
            int index = hash(key);
            Node* newNode = new Node(value, key);
            if(dataMap[index] == nullptr){
                dataMap[index] = newNode;
            }
            else{
                Node* temp = dataMap[index];
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        int get(string key){
            int index = hash(key);
            Node* temp = dataMap[index];
            while(temp != nullptr){
                if(temp->key == key) return temp->value;
                temp = temp->next;
            }
            return 0;
        }

        vector<string> keys(){
            vector<string> allkeys;
            for(int i = 0; i < size; i ++){
                Node* temp = dataMap[i];
                while(temp!= nullptr){
                    allkeys.push_back(temp->key);
                    temp = temp->next;
                }
            }
            return allkeys;
        }
};

int main(){
    HashTable hashtb;
    cout << "hello world" << endl;
    hashtb.set("Apple", 100);
    hashtb.set("Banana", 200);
    hashtb.set("Pineable", 300);
    hashtb.set("Lemon", 100);
    hashtb.set("Mango", 100);

    hashtb.printTable();
    cout << hashtb.keys()[0] << endl;
}