#ifndef MERGE_SORT_MANAGER_H
#define MERGE_SORT_MANAGER_H

#include <iostream>
#include <time.h>
#include "ArrayManager.h"

class MergeSortManager:public ArrayManager<double> {

public:
  MergeSortManager();
  MergeSortManager(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort);
  ~MergeSortManager();

private:
  void mergeSort(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort);
  void merge(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort, double* leftSubArray, int sizeOfLeftSubArray, double* rightSubArray, int sizeOfRightSubArray);

};

#endif
