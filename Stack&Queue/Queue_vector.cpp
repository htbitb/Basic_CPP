#include <iostream>
#include <vector>

using namespace std;

class Queue{
    private:
        vector<int> vectorQueue;
    
    public:
        vector<int>& getVectorQueue() { return vectorQueue; }

        Queue(int value){
            vectorQueue.push_back(value);
        }

        ~Queue() { vectorQueue.clear(); }

        void print_queue(){
            for(int i = 0; i < vectorQueue.size(); i++){
                cout << vectorQueue[i] << " ";
            }
            cout << endl;
        }
        void enqueue(int value){
            vectorQueue.push_back(value);
        }

        int dequeue(){
            if(vectorQueue.empty()) return int();
            int val = vectorQueue.front();
            vectorQueue.erase(vectorQueue.begin());
            return val;
        }
};

int main(){
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(15);
    queue.enqueue(20);
    queue.enqueue(25);

    queue.print_queue(); // Output: 5 10 15 20 25
}
