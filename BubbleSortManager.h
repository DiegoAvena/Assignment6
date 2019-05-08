#ifndef BUBBLE_SORT_MANAGER_H
#define BUBBLE_SORT_MANAGER_H

#include <iostream>
#include "ArrayManager.h"
#include <time.h>  /* clock_t, clock, CLOCKS_PER_SEC */

//template <typename dataType>

class BubbleSortManager: public ArrayManager<double>  {

public:
  BubbleSortManager();

  ~BubbleSortManager();

  void bubbleSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort);

};

#endif
