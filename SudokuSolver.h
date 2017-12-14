/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SudokuSolver.h
 * Author: dennis
 *
 * Created on December 14, 2017, 9:23 PM
 */

#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

// This function finds an entry in grid that is still unassigned
bool FindUnassignedLocation(int, int &row, int &col);
 
// Checks whether it will be legal to assign num to the given row,col
bool isSafe(int , int row, int col, int num);

bool SolveSudoku(int);
bool UsedInRow(int, int row, int num);
bool UsedInCol(int, int col, int num);
bool UsedInBox(int, int boxStartRow, int boxStartCol, int num);
bool isSafe(int, int row, int col, int num);
void printGrid(int);
void solver(int);

#endif /* SUDOKUSOLVER_H */

