#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
    Queue(int size = 10);
    ~Queue();
    void enqueue(double elem);
    double dequeue();
    int size();
    void clear();
    bool empty();
    bool full();
    void print();
    
private:
    double* m_data;
    int m_front; // Schreibposition
    int m_back;  // Leseposition
    int m_size;
    int count;
};

#endif /* QUEUE_H */

