#ifndef QUICK_SORT_MANAGER_H
#define QUICK_SORT_MANAGER_H

#include <iostream>
#include <time.h>
#include "ArrayManager.h"

class QuickSortManager:public ArrayManager<double> {

private:
  int getPartition(double* arrayOfItemsToSort, int minIndex, int maxIndex);

public:
  QuickSortManager();

  QuickSortManager(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort);

  ~QuickSortManager();

  void QuickSort(double* arrayOfItemsToSort, int minIndex, int maxIndex);

};

#endif
