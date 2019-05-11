#include "InsertionSortManager.h"

using namespace std;

InsertionSortManager::InsertionSortManager() {

}

InsertionSortManager::~InsertionSortManager() {

}

void InsertionSortManager::insertionSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

  copyArray(arrayOfItemsToCopyAndSort, sizeOfArrayOfItemsToSort);

  cout<<"----------------------------------------------------------------------------------------------------"<<endl;
  cout<<"INSERTION SORT"<<std::endl;

  float startingTime = ((float)clock()) / CLOCKS_PER_SEC;

  cout<<"Time sort started at: "<<startingTime<<"s."<<endl;

  for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

    double currentValueToInsertIntoCorrectSpot = arrayOfItems[i];

    /*

    -going to compare this value to the left neighbors,
    and if any of these are bigger, we shift them right to make room for the
    currentValueToInsertIntoCorrectSpot in the array (NOTE TO SELF: see page 111 of textbook for a visual on this)

    */

    int j = i - 1;

    while (j >= 0 && (arrayOfItems[j] > currentValueToInsertIntoCorrectSpot)) {

      //this left neighbor is bigger, and needs to be shifted right to make some room for currentValueToInsertIntoCorrectSpot
      arrayOfItems[j + 1] = arrayOfItems[j];
      j--;

    }

    /*

    -By this point we are at the correct spot to insert the value at in the array:
    do j + 1 because j will always be 1 less then the actual spot this value should be inserted at due to doing j--

    */
    arrayOfItems[j + 1] = currentValueToInsertIntoCorrectSpot;

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
