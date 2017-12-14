/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dennis
 *
 * Created on December 13, 2017, 10:16 PM
 */
#include <iostream>
#include <iomanip>
#include "Queue.h"
#include "Stack.h"
#include <array>
#include "Backtrack.h"

using std::array;
using std::cout; using std::endl; using std::setw; using std::right;
 
/*int main(int argc, char** argv) {
/*try{
    Queue q(100);
    for (int i = 0; i < 100; ++i)
        q.enqueue(1 * i);

    q.print();
    for (int i = 0; i < 100; ++i)
        cout << q.dequeue() << " ";
    cout << endl;
    q.enqueue(34);
    q.enqueue(43);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    
    } catch (const char* c)
    {
        cout << c << endl;
    } catch (int i) {
        cout << "is empty" << endl;
    }
  
    try{
        Point feld[5][5] = {{{0,0,true} ,{1,0,true} ,{2,0,true} ,{3,0,true} ,{4,0,true}},
                            {{0,1,true} ,{1,1,false},{2,1,false},{3,1,false},{4,1,true}},
                            {{0,2,false},{1,2,false},{2,2,true} ,{3,2,true} ,{4,2,true}},
                            {{0,3,true} ,{1,3,false},{2,3,true} ,{3,3,false},{4,3,true}},
                            {{0,4,true} ,{1,4,true} ,{2,4,true} ,{3,4,true} ,{4,4,true}}};
        
        feld[0][3].tile.setTile()
        
        for (int i = 0; i < 5; ++i){
            for (int j = 0; j < 5; ++j)
                cout << setw(4) << right << feld[i][j].tile.getFloor();
            cout << endl;
        }
        
        
      Stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        cout << st.size() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.size() << endl;
        cout << st.pop() << endl;
        
    } catch (char* c) {
        cout << c << endl;
    }
    
    return 0;
}*/

