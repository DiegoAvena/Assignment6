#ifndef INSERTION_SORT_MANAGER_H
#define INSERTION_SORT_MANAGER_H

#include <iostream>
#include "ArrayManager.h"

/*

-InsertionSortManager contains the algorithm for performing
an insertion sort type of sorting and recording its start and end times. 

*/
class InsertionSortManager:public ArrayManager<double> {

public:
  InsertionSortManager(); //default constructor

  ~InsertionSortManager(); //destructor

  void insertionSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort); //performs insertion sort on given array of items

};

#endif
