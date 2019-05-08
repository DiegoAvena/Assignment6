#include "BubbleSortManager.h"
using namespace std;

BubbleSortManager::BubbleSortManager() {

}

BubbleSortManager::~BubbleSortManager() {

}

void BubbleSortManager::bubbleSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

  copyArray(arrayOfItemsToCopyAndSort, sizeOfArrayOfItemsToSort);

  cout<<"----------------------------------------------------------------------------------------------------"<<endl;
  cout<<"BUBBLE SORT"<<std::endl;

  float startingTime = ((float)clock()) / CLOCKS_PER_SEC;

  cout<<"Time sort started at: "<<startingTime<<"s."<<endl;

  for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

    for (int j = 0; j < sizeOfArrayOfItemsToSort - 1; j++) {

      if (arrayOfItems[j] > arrayOfItems[j+1]) {

        //swap, the item on the left side of the current item is smaller:
        double tempValue = arrayOfItems[j + 1];
        arrayOfItems[j + 1] = arrayOfItems[j];
        arrayOfItems[j] = tempValue;
        //dataType* arrayOfItems;

      }

    }

  }

  float endingTime = ((float)clock()) / CLOCKS_PER_SEC;
  cout<<"Time sort ended at: "<<endingTime<<"s."<<endl;

  float timeTaken = endingTime - startingTime;
  cout<<"Time sort took is: "<<timeTaken<<"s."<<endl;
  cout<<"The sorted array is: "<<endl;
  printArray(sizeOfArrayOfItemsToSort);
  cout<<endl;
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;

}
