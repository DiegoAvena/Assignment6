#include "MergeSortManager.h"
using namespace std;

MergeSortManager::MergeSortManager() {



}

MergeSortManager::MergeSortManager(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort) {

  copyArray(arrayOfItemsToSort, sizeOfArrayOfItemsToSort);

  cout<<"----------------------------------------------------------------------------------------------------"<<endl;
  cout<<"MERGE-SORT"<<endl;

  float startingTime = ((float)clock()) / CLOCKS_PER_SEC;
  cout<<"Time sort started at: "<<startingTime<<"s."<<endl;

  mergeSort(arrayOfItems, sizeOfArrayOfItemsToSort);

  float endingTime = ((float)clock()) / CLOCKS_PER_SEC;
  cout<<"Time sort ended at: "<<endingTime<<"s"<<endl;

  float timeTaken = endingTime - startingTime;
  cout<<"Time sort took is: "<<timeTaken<<"s."<<endl;

  cout<<"The sorted array is: "<<endl;
  printArray(sizeOfArrayOfItemsToSort);

  cout<<endl;
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;

}

MergeSortManager::~MergeSortManager() {



}

void MergeSortManager::mergeSort(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort) {

  if (sizeOfArrayOfItemsToSort > 1) {

    //there are items to sort:
    double* leftArray;
    double* rightArray;

    int sizeOfLeftArray = sizeOfArrayOfItemsToSort / 2;
    int sizeOfRightArray = sizeOfArrayOfItemsToSort - (sizeOfArrayOfItemsToSort / 2);

    leftArray = new double[sizeOfLeftArray];
    rightArray = new double[sizeOfRightArray];

    //split array down the middle into a left and right sub arrays:
    for (int i = 0; i < (sizeOfArrayOfItemsToSort / 2); i++) {

      //cout<<"Placing "<< arrayOfItemsToSort[i] <<" into left sub array"<<endl;
      leftArray[i] = arrayOfItemsToSort[i];

    }

    int indexInRightArray = 0;
    for (int i = (sizeOfArrayOfItemsToSort / 2); i < sizeOfArrayOfItemsToSort; i++) {

      rightArray[indexInRightArray] = arrayOfItemsToSort[i];
      indexInRightArray++;

    }

    mergeSort(leftArray, sizeOfLeftArray);
    mergeSort(rightArray, sizeOfRightArray);

    merge(arrayOfItemsToSort, sizeOfArrayOfItemsToSort, leftArray, sizeOfLeftArray, rightArray, sizeOfRightArray);

  }

}

void MergeSortManager::merge(double* arrayOfItemsToSort, int sizeOfArrayOfItemsToSort, double* leftSubArray, int sizeOfLeftSubArray, double* rightSubArray, int sizeOfRightSubArray) {

  int currentIndexInLeftSubArray = 0;
  int currentIndexInRightSubArray = 0;
  int currentIndexInArrayOfItemsToSort = 0;

  //insert items from either the left or right subarrays depending on which one has the lowest value:
  while ((currentIndexInLeftSubArray < sizeOfLeftSubArray) && (currentIndexInRightSubArray < sizeOfRightSubArray)) {

    /*

    -NOTE TO SELF: By this point, the left and right subarrays will be sorted from least to greatest
    because they are seperated all the way to arrays of length 1, so this method is called with those
    subarrays as input values, which sorts those small arrays into the larger array in a least to greatest
    fashion, which makes that larger array a now sorted subarray of its own larger array, and so on and so forth.

    */
    if (leftSubArray[currentIndexInLeftSubArray] <= rightSubArray[currentIndexInRightSubArray]) {

      //insert the item in left subarray into back of array since it is the smaller value
      arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = leftSubArray[currentIndexInLeftSubArray];

      //"remove" item from left subarray
      currentIndexInLeftSubArray++;

    }
    else {

      //insert the item in right subarray into back of array since it is the smaller value
      arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = rightSubArray[currentIndexInRightSubArray];

      //"remove" item from right subarray
      currentIndexInRightSubArray++;

    }

    currentIndexInArrayOfItemsToSort++;

  }

  while (currentIndexInLeftSubArray < sizeOfLeftSubArray) {

    //put remaining items from left sub array into the array:
    arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = leftSubArray[currentIndexInLeftSubArray];
    currentIndexInLeftSubArray++;
    currentIndexInArrayOfItemsToSort++;

  }

  while (currentIndexInRightSubArray < sizeOfRightSubArray) {

    //put remaining items from right sub array into the array:
    arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = rightSubArray[currentIndexInRightSubArray];
    currentIndexInRightSubArray++;
    currentIndexInArrayOfItemsToSort++;

  }

}
