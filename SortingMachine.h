#ifndef SORTING_MACHINE_H
#define SORTING_MACHINE_H

#include "FileInputManager.h"
#include "BubbleSortManager.h"
#include "InsertionSortManager.h"
#include <iostream>

class SortingMachine {

private:
  int numberOfItemsToSort;
  double* arrayOfItemsToSort;
  int indexOfWhereToInputNextItemIntoArray;

public:
  SortingMachine();
  SortingMachine(std::string fileName);
  ~SortingMachine();
  void readFromFileWithSpecificRules(std::string line);

};

#endif
