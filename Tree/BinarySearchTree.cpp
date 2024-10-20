#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* left;
        Node* right;

        Node(int value){
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
};

class BinarySearchTree{
    private:
        Node* root;

    public: 
        BinarySearchTree() {root = nullptr;}

        void destroy(Node* currentNode){
            if(currentNode == nullptr) return;
            if(currentNode->left) (currentNode->left);
            if(currentNode->right) (currentNode->right);
            delete currentNode;
        }

        ~BinarySearchTree() {destroy(root);}

        bool insert(int value){
            Node* newNode = new Node(value);
            if(root == nullptr){
                root = newNode;
                return true;
            }
            else{
                Node* currentNode = root;
                while(value != currentNode->value){
                    if(value < currentNode->value){
                        if(currentNode->left == nullptr){
                            currentNode->left = newNode;
                            return true;
                        }
                        currentNode = currentNode->left;
                    }
                    else if(value > currentNode->value){
                        if(currentNode->right == nullptr){
                            currentNode->right = newNode;
                            return true;
                        }
                        currentNode = currentNode->right;
                    }
    
                }
                return false;
            }
        }
};

int main(){
    BinarySearchTree bst;
    cout << bst.insert(30) << endl;
    cout << bst.insert(10) << endl;
    cout << bst.insert(20) << endl;
    cout << bst.insert(10) << endl;
    
}