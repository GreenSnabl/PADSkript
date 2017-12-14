/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Backtrack.h
 * Author: dennis
 *
 * Created on December 14, 2017, 6:12 PM
 */

#ifndef BACKTRACK_H
#define BACKTRACK_H

class Backtrack {
public:
    Backtrack();
   ~Backtrack();
private:
};


class Tile{
public:
    Tile(bool b)
    {
        setTile(b);
    }
    void setTile(bool b)
    {
        if (b) {walkable = true; floor = '.';}
        if (!b) {walkable = false; floor = 'x';}    
    }
    char getFloor()
    {
        return floor;
    }
private:
    char floor;
    bool walkable;
};

struct Point{
    Point(int x, int y, bool walkable) : xx{x}, yy{y}, tile{Tile(walkable)} 
    {
    }  
    int xx;
    int yy;
    Tile tile;
};


#endif /* BACKTRACK_H */

