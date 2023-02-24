// Implementation file for linked StackType
#include "Stack.h"


template<class T>
Stack<T>::Stack() {
    top = -1;
    maxSize = DEFAULT_STACK_SIZE;
    data = new T[DEFAULT_STACK_SIZE];
}

template<class T>
Stack<T>::Stack(int stackSize) {
    if (stackSize < 1) {
        throw "Invalid stack size";
    }

    top = -1;
    maxSize = stackSize;
    data = new T[stackSize];
}

template<class T>
Stack<T>::~Stack() {
    delete[] data;
}

template<class T>
bool Stack<T>::IsFull() const {
    return top == maxSize - 1;
}

template<class T>
bool Stack<T>::IsEmpty() const {
    return top == -1;
}

template<class T>
void Stack<T>::Push(T item) {
    if (IsFull()) {
        throw FullStack("Push");
    }
    ++top;
    data[top] = item;
}

template<class T>
void Stack<T>::Pop() {
    if (IsEmpty()) {
        throw EmptyStack();
    }
    --top;
}

template<class T>
T Stack<T>::Top() {
    if (IsEmpty()) {
        throw EmptyStack();
    }
    return data[top];
}