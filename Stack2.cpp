#include <iostream>

using namespace std;
#define MAX_SIZE 15

class Stack {
private:
    int top;
    int arr[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }

    bool push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
            return false;
        }

        arr[++top] = x;
        return true;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }

        return arr[top--];
    }

    bool isEmpty() {

        return (top < 0);
    }

    bool isFull() {

        return (top >= MAX_SIZE - 1);
    }

void display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "\nStack elements: ";
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
  }

int min() {
    if (isEmpty()) {

        return INT_MAX;
    }
    int minValue = arr[0];
    for (int i = 1; i <= top; i++) {
        if (arr[i] < minValue) {

            minValue = arr[i];
        }
    }

    return minValue;
}
};


int main() {

    Stack stk;
    cout << "Input some elements onto the stack:";
    stk.push(5);
    stk.push(2);
    stk.push(4);
    stk.push(7);
    stk.display();

    int max_val = stk.min();
    cout << "Minimum value:\n " << max_val << endl;
    cout << "Remove two elements:\n";
    stk.pop();
    stk.pop();
    stk.display();
    cout << "Input two more elements\n";
    stk.push(2);
    stk.push(-1);
    stk.push(5);
    stk.push(4);
    stk.push(7);
    stk.display();
    cout << "Minimum value:\n " << max_val << endl;
    cout << "Remove two elements:\n";

    stk.pop();
    stk.pop();
    stk.display();
    cout << endl;

    return 0;
}
