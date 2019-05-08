#ifndef INSERTION_SORT_MANAGER_H
#define INSERTION_SORT_MANAGER_H

#include <iostream>
#include "ArrayManager.h"

class InsertionSortManager:public ArrayManager<double> {

public:
  InsertionSortManager();

  ~InsertionSortManager();

  void insertionSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort);

};

#endif
