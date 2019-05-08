#include "QuickSortManager.h"
using namespace std;

QuickSortManager::QuickSortManager() {

}

QuickSortManager::QuickSortManager(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

  copyArray(arrayOfItemsToCopyAndSort, sizeOfArrayOfItemsToSort);
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;
  cout<<"QUICK-SORT"<<endl;

  float startingTime = ((float)clock()) / CLOCKS_PER_SEC;
  cout<<"Time sort started at: "<<startingTime<<"s."<<endl;

  QuickSort(arrayOfItems, 0, sizeOfArrayOfItemsToSort - 1);

  float endingTime = ((float)clock()) / CLOCKS_PER_SEC;
  cout<<"Time sort ended at: "<<endingTime<<"s"<<endl;

  float timeTaken = endingTime - startingTime;
  cout<<"Time sort took is: "<<timeTaken<<"s."<<endl;
  cout<<"The sorted array is: "<<endl;
  printArray(sizeOfArrayOfItemsToSort);
  cout<<endl;
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;

  cout<<endl;

}

QuickSortManager::~QuickSortManager() {

}

//References: https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/tutorial/, https://www.algorithmist.com/index.php/Quicksort, https://www.geeksforgeeks.org/quick-sort/
int QuickSortManager::getPartition(double* arrayOfItemsToSort, int minIndex, int maxIndex) {

  double pivot = arrayOfItemsToSort[maxIndex]; //pivot is set to the last item in the array
  int positionOfSmallerValue = minIndex - 1; //where the smaller value goes

  //items smaller then the pivot go on left side of the pivot:
  for (int j = minIndex; j <= maxIndex - 1; j++) {

    if (arrayOfItemsToSort[j] <= pivot) {

      positionOfSmallerValue++; //increase position of where smaller value will go

      double tempValue = arrayOfItemsToSort[positionOfSmallerValue];
      arrayOfItemsToSort[positionOfSmallerValue] = arrayOfItemsToSort[j];
      arrayOfItemsToSort[j] = tempValue;

    }

  }

  //put pivot in correct position of array:
  double tempValue = arrayOfItemsToSort[positionOfSmallerValue + 1];
  arrayOfItemsToSort[positionOfSmallerValue + 1] = arrayOfItemsToSort[maxIndex];
  arrayOfItemsToSort[maxIndex] = tempValue;

  //return the location in the array of where the next partitions will occur:
  return positionOfSmallerValue+1;

}

void QuickSortManager::QuickSort(double* arrayOfItemsToSort, int minIndex, int maxIndex) {

  if (minIndex < maxIndex) {

    //there are items to sort, since there is more than 1 item in the array:
    int partitionIndex = getPartition(arrayOfItemsToSort, minIndex, maxIndex);

    //partition left:
    QuickSort(arrayOfItemsToSort, minIndex, partitionIndex - 1);

    //partition right:
    QuickSort(arrayOfItemsToSort, partitionIndex + 1, maxIndex);

  }


  /*if (sizeOfArrayOfItemsToSort <= 1) {

    //there is nothing to sort because either there or no items or there is only 1 item
    return;

  }

  double pivot = arrayOfItemsToSort[sizeOfArrayOfItemsToSort - 1]; //set pivot to be last element of the array

  double* leftContainer;
  double* middleContainer;
  double* rightContainer;

  int sizeOfLeftContainer = 0;
  int sizeOfRightContainer = 0;
  int sizeOfMiddleContainer = 0;

  int currentIndexInLeftContainer = 0;
  int currentIndexInRightContainer = 0;
  int currentIndexInMiddleContainer = 0;

  int currentIndexInArrayOfItemsToSort = (sizeOfArrayOfItemsToSort - 1);

  for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

    if (arrayOfItemsToSort[i] < pivot ) {

      sizeOfLeftContainer++;

    }

    else if (arrayOfItemsToSort[i] > pivot) {

      sizeOfRightContainer++;

    }
    else {

      sizeOfMiddleContainer++;

    }

  }

  //int currentIndexInLeftContainer = sizeOfLeftContainer - 1;
  //int currentIndexInRightContainer = sizeOfRightContainer - 1;
  //int currentIndexInMiddleContainer = sizeOfMiddleContainer - 1;

  leftContainer = new double[sizeOfLeftContainer];
  rightContainer = new double[sizeOfRightContainer];
  middleContainer = new double[sizeOfMiddleContainer];

  while (sizeOfArrayOfItemsToSort != 0) {

    //still items to split into left, middle, or right container:
    if (arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] < pivot) {

      //store at back of left container, element smaller than pivot:
      leftContainer[currentIndexInLeftContainer] = arrayOfItemsToSort[currentIndexInArrayOfItemsToSort];
      currentIndexInLeftContainer++;

    }
    else if (arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] == pivot) {

      //store at back of middle container, element equals the pivot:
      middleContainer[currentIndexInMiddleContainer] = arrayOfItemsToSort[currentIndexInArrayOfItemsToSort];
      currentIndexInMiddleContainer++;

    }
    else {

      //store at back of right container, element larger than pivot:
      rightContainer[currentIndexInRightContainer] = arrayOfItemsToSort[currentIndexInArrayOfItemsToSort];
      currentIndexInRightContainer++;

    }

    //""Remove" item from array of items to sort:"
    currentIndexInArrayOfItemsToSort--;
    sizeOfArrayOfItemsToSort--;

  }

  QuickSort(leftContainer, sizeOfLeftContainer);
  QuickSort(rightContainer, sizeOfRightContainer);

  currentIndexInArrayOfItemsToSort = 0;

  while (sizeOfLeftContainer != 0) {

    arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = leftContainer[currentIndexInLeftContainer];
    currentIndexInLeftContainer++;
    sizeOfLeftContainer--;
    currentIndexInArrayOfItemsToSort++;

  }

  delete[] leftContainer;

  while (sizeOfMiddleContainer != 0) {

    arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = middleContainer[currentIndexInMiddleContainer];
    currentIndexInMiddleContainer++;
    sizeOfMiddleContainer--;
    currentIndexInArrayOfItemsToSort++;

  }

  delete[] middleContainer;

  while (sizeOfRightContainer != 0) {

    arrayOfItemsToSort[currentIndexInArrayOfItemsToSort] = rightContainer[currentIndexInRightContainer];
    currentIndexInRightContainer++;
    sizeOfRightContainer--;
    currentIndexInArrayOfItemsToSort++;

  }

  delete[] rightContainer;*/

}
