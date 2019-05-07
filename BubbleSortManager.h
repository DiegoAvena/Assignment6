#ifndef BUBBLE_SORT_MANAGER_H
#define BUBBLE_SORT_MANAGER_H

#include <iostream>
#include <time.h>  /* clock_t, clock, CLOCKS_PER_SEC */

template <typename dataType>

class BubbleSortManager {

private:
  //int sizeOfArrayOfItemsToSort;
  dataType* arrayOfItemsToSort;

  void copyArray(dataType* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

    arrayOfItemsToSort = new dataType[sizeOfArrayOfItemsToSort];

    for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

      arrayOfItemsToSort[i] = arrayOfItemsToCopyAndSort[i];

    }

  }

  void printArray(int sizeOfArrayOfItemsToSort) {

    for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

      std::cout<<arrayOfItemsToSort[i]<<" ";

    }
    std::cout<<std::endl;

  }

public:
  BubbleSortManager() {

    arrayOfItemsToSort = NULL;

  }

  ~BubbleSortManager() {

    delete[] arrayOfItemsToSort;

  }

  void bubbleSort(dataType* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

    copyArray(arrayOfItemsToCopyAndSort, sizeOfArrayOfItemsToSort);

    std::cout<<"----------------------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"BUBBLE SORT"<<std::endl;

    float startingTime = ((float)clock()) / CLOCKS_PER_SEC;

    std::cout<<"Time sort started at: "<<startingTime<<"s."<<std::endl;

    for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

      for (int j = 0; j < sizeOfArrayOfItemsToSort - 1; j++) {

        if (arrayOfItemsToSort[j] > arrayOfItemsToSort[j+1]) {

          //swap, the item on the left side of the current item is smaller:
          double tempValue = arrayOfItemsToSort[j + 1];
          arrayOfItemsToSort[j + 1] = arrayOfItemsToSort[j];
          arrayOfItemsToSort[j] = tempValue;

        }

      }

    }

    float endingTime = ((float)clock()) / CLOCKS_PER_SEC;
    std::cout<<"Time sort ended at: "<<endingTime<<"s."<<std::endl;

    float timeTaken = endingTime - startingTime;
    std::cout<<"Time sort took is: "<<timeTaken<<"s."<<std::endl;
    std::cout<<"The sorted array is: "<<std::endl;
    printArray(sizeOfArrayOfItemsToSort);
    std::cout<<"----------------------------------------------------------------------------------------------------"<<std::endl;

  }

};

#endif
