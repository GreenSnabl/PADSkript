#ifndef STACK_H
#define STACK_H
#include "Stack.h"
#include <iostream>



using std::cout; using std::endl;

template <typename T>
class Stack {
public:
    Stack(int size = 10);
    ~Stack()
    {
    delete[] m_data;
    }
    void push(T elem);
    int pop();
    int size() const;    
private:
    T* m_data;
    int m_size;
    int m_top;
    
};



template <typename T>
Stack<T>::Stack(int size) {
    m_data = new T[size];
    m_size = size;
    m_top = 0;
}


template <typename T>
void Stack<T>::push(T elem)
{
    if (m_top == m_size) 
    {
        cout << "Stack ist voll." << endl;
        return;
    }
    m_data[m_top++] = elem;
}

template <typename T>
int Stack<T>::pop()
{
    if (m_top == 0)
    {
        throw "Stack ist leer";
    }
    return m_data[--m_top];
}

template <typename T>
int Stack<T>::size() const
{
    return m_top;
}





#endif /* STACK_H */

