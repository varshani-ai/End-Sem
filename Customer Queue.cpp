#include <iostream>
using namespace std;

#define MAX 5

string queue[MAX];
int front = -1;
int rear = -1;

void enqueue(string name)
{
    if (rear == MAX - 1){
        cout << "Queue is full!" << endl;
    } else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = name;

        cout << "Customer added: " << name << endl;
    }
}

void dequeue()
{
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Attending customer: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "No customers waiting!" << endl;
    } else {
        cout << "Waiting Customers:" << endl;

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << endl;
        }
    }
}

int main() {
    enqueue("Vishwa");
    enqueue("Thikesh");
    enqueue("Vaitheesh");

    display();

    dequeue();

    display();

    return 0;
}
