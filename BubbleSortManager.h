#ifndef BUBBLE_SORT_MANAGER_H
#define BUBBLE_SORT_MANAGER_H

#include <iostream>
#include "ArrayManager.h"
#include <time.h>

/*

-Contains the methods needed to perform a bubble sort type of sort. Inherits
from array manager to use it as an array container and the array methods that will be
used more than once throughout this program

*/
class BubbleSortManager: public ArrayManager<double>  {

public:
  BubbleSortManager(); //default constructor

  ~BubbleSortManager(); //destructor

  void bubbleSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort); //contains the bubble sort algorithm

};

#endif
