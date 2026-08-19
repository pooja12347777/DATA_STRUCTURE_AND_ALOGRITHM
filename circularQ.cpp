#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int rear;
    int front;
    int size;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value) {
        // Overflow check
        if ((front == 0 && rear == size - 1) ||
            (rear == (front - 1 + size) % size)) {
            return false;
        }

        // Inserting the first element
        if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int dequeue() {
        // Underflow check
        if (front == -1) {
            return -1;
        }

        int ans = arr[front];

        // Queue contains only one element
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }

        return ans;
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    CircularQueue queue(5);

    cout << queue.enqueue(10) << endl;
    cout << queue.enqueue(20) << endl;
    cout << queue.enqueue(30) << endl;

    cout << "Deleted: " << queue.dequeue() << endl;
    cout << "Deleted: " << queue.dequeue() << endl;

    return 0;
}