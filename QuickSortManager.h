#ifndef QUICK_SORT_MANAGER_H
#define QUICK_SORT_MANAGER_H

#include <iostream>
#include <time.h>
#include "ArrayManager.h"

/*

-Contains all of the logic for
quick sort, inherits from ArrayManager in order to

*/
class QuickSortManager:public ArrayManager<double> {

private:
  int getPartition(double* arrayOfItemsToSort, int minIndex, int maxIndex); //partitions the array

public:
  QuickSortManager(); //default constructor

  QuickSortManager(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort); //constructor, makes a copy of the array to sort and calls the quick sort method with the algorithm

  ~QuickSortManager();

  void QuickSort(double* arrayOfItemsToSort, int minIndex, int maxIndex);

};

#endif
