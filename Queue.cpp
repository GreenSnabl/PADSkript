#include "Queue.h"
#include <iostream>
#include <iomanip>

using std::cout; using std::setw; using std::right; using std::endl;

Queue::Queue(int size) 
{
    m_data = new double[size];
    m_front = 0;
    m_back = 0;
    count = 0;
    m_size = size;    
}

Queue::~Queue()
{
    delete[] m_data;
    
}

bool Queue::empty()
{
    if (m_back == m_front && count == 0)
        return true;
    return false;
}

bool Queue::full()
{
    if(m_back == m_front && count != 0)                     //   Lesepos direkt hinter Schreibpos.
        return true; 
    return false;
}

void Queue::enqueue(double elem)
{
    if(full())
    {
        throw "is full";
    }
    m_data[m_front] = elem;
    ++count;
    m_front = (m_front + 1) % m_size;             // für Sequenz gälte m_front += 1;
}                                                 // RINGSTRUKTUR wird durch modulo der Ringgröße erreicht
                                                  // ist m_front == m_size wird durch den modulo
                                                  // m_front = m_size % m_size; (== 0); erreicht

double Queue::dequeue()
{
    if(empty())
    {
        throw -1;
    }
    double tmp = m_data[m_back];
    --count;
    m_back = (m_back + 1) % m_size;
    return tmp;
}

void Queue::clear()
{
    m_front = 0;
    m_back = 0;
    count = 0;
}

int Queue::size()
{
    return count;
}

void Queue::print()
{
    for (int i = 0; i < size(); ++i)
        cout << m_data[m_back + i] << " ";
    cout << endl;
}