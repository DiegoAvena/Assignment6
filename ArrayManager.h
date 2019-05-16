#ifndef ARRAY_MANAGER_H
#define ARRAY_MANAGER_H

template <typename dataType>

#include <iostream>

/*

-Acts as a container class for an array that will be used as a
copy by the sorting algorithms for testing. In here are also 2 methods that will
be used more than once, which is why it was best to define a class with them for less
redundancy

*/
class ArrayManager {

public:

  //default constructor
  ArrayManager() {

    arrayOfItems = NULL;

  }

  //destructor, delete the allocated array here
  ~ArrayManager() {

    if (arrayOfItems != NULL) {

      delete[] arrayOfItems;

    }

  }

protected:

  dataType* arrayOfItems; //the array of items to be sorted

  //prints the contents of the array
  void printArray(int sizeOfArrayOfItems) {

    for (int i = 0; i < sizeOfArrayOfItems; i++) {

      std::cout<<arrayOfItems[i]<<" ";

    }

  }

  //copies an array 
  dataType* copyArray(dataType* arrayOfItemsToCopy, int sizeOfArrayOfItemsToCopy) {

    arrayOfItems = new dataType[sizeOfArrayOfItemsToCopy];

    for (int i = 0; i < sizeOfArrayOfItemsToCopy; i++) {

      arrayOfItems[i] = arrayOfItemsToCopy[i];

    }

    return arrayOfItems;

  }

};

#endif
