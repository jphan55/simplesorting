/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Demonstration Code
*  Purpose: A demonstration of searching, sorting.
************************************************* */

#ifndef SORT_FUNCTIONS_H
#define SORT_FUNCTIONS_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>     /* cout, endl */

using std::cout;
using std::endl;

void swap(int*, int*); //swap two things
int randBetween(int, int); //two random numbers upper and lower bound
int minValue(const int*, const int); //how to find the minimum value
int minIndex(const int*, const int); //find the index of the minimum value
int maxValue(const int*, const int); //find maximum value0
int maxIndex(const int*, const int); //find minimum of maximum value
int getRandValue(const int*, const int); //get any random value out of something
int linearSearch(const int*, const int, int); //linear search
void bubbleSort(int*, const int); //search algorithm 1
void selectionSort(int*, const int); //search algorithm 2
void printArray(const int*, int); //printArray (a linear search)

#endif /* SORT_FUNCTIONS_H */
