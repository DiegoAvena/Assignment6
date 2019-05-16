#ifndef SORTING_MACHINE_H
#define SORTING_MACHINE_H

#include "FileInputManager.h"
#include "BubbleSortManager.h"
#include "InsertionSortManager.h"
#include "QuickSortManager.h"
#include "MergeSortManager.h"

#include <iostream>

/*

-Responsible for Preping everything for sorting by initializing the unsorted array using
the input file given, and calls the different sorting algorithms.

*/
class SortingMachine {

private:
  int numberOfItemsToSort; //the number of items that need to be sorted in the array so that the array size can be initialized correctly
  double* arrayOfItemsToSort; //the array of items that need to be sorted
  int indexOfWhereToInputNextItemIntoArray; //Keeps track of where to put the next item into the array when reading from the input file

public:
  SortingMachine(); //default constructor
  SortingMachine(std::string fileName); //overrided constructor, used when the user provides the name of a file in the command line
  ~SortingMachine(); //destructor
  void readFromFileWithSpecificRules(std::string line); //with the help of FileInputManager, reads from the input file with the correct rules and initialized everything for sorting

};

#endif
