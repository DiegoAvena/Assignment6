#ifndef ARRAY_MANAGER_H
#define ARRAY_MANAGER_H

template <typename dataType>

#include <iostream>

class ArrayManager {

public:

  ArrayManager() {

    arrayOfItems = NULL;

  }

  ~ArrayManager() {

    if (arrayOfItems != NULL) {

      delete[] arrayOfItems;

    }

  }

protected:
  dataType* arrayOfItems;

  void printArray(int sizeOfArrayOfItems) {

    for (int i = 0; i < sizeOfArrayOfItems; i++) {

      std::cout<<arrayOfItems[i];

    }

  }

  void copyArray(dataType* arrayOfItemsToCopy, int sizeOfArrayOfItemsToCopy) {

    arrayOfItems = new dataType[sizeOfArrayOfItemsToCopy];

    for (int i = 0; i < sizeOfArrayOfItemsToCopy; i++) {

      arrayOfItems[i] = arrayOfItemsToCopy[i];

    }

  }

};

#endif
