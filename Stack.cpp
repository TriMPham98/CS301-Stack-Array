// Implementation file for linked StackType
#include "Stack.h"


template<class T>
Stack<T>::Stack() {
    top = -1;
    data = new T[DEFAULT_STACK_SIZE]; // new dynamic array of template type T
}

template<class T>
Stack<T>::~Stack() {

}

template<class T>
bool Stack<T>::IsFull() const {
    return false;
}

template<class T>
bool Stack<T>::IsEmpty() const {
    return false;
}

template<class T>
void Stack<T>::Push(T item) {

}

template<class T>
void Stack<T>::Pop() {

}

template<class T>
T Stack<T>::Top() {
    return nullptr;
}