#ifndef MERGE_SORT_MANAGER_H
#define MERGE_SORT_MANAGER_H

#include <iostream>
#include <time.h>
#include "ArrayManager.h"

/*

-Contains all of the logic needed for merge sort, inherits from ArrayManager
which contains the array to be sorted and the methods for printing its contents and copying it.

*/
class MergeSortManager:public ArrayManager<double> {

public:
  MergeSortManager(); //default constructor

  /*

  -overloaded constructor, creates copy of array of items to sort with help
  of ArrayManager and sorts with the mergeSort algorithm

  */
  MergeSortManager(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort);

  ~MergeSortManager(); //destructor

private:
  void mergeSort(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort); //contains the merge sort algorithm
  void merge(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort, double* leftSubArray, int sizeOfLeftSubArray, double* rightSubArray, int sizeOfRightSubArray); //contains the algorithm for merging the 2 sub arrays created into 1

};

#endif
