#include "QuickSortManager.h"
using namespace std;

//default constructor
QuickSortManager::QuickSortManager() {

}

 //constructor, makes a copy of the array to sort and calls the quick sort method with the algorithm
QuickSortManager::QuickSortManager(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

  copyArray(arrayOfItemsToCopyAndSort, sizeOfArrayOfItemsToSort); //make a copy of the array of items to be sorted
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;
  cout<<"QUICK-SORT"<<endl;

  float startingTime = ((float)clock()) / CLOCKS_PER_SEC; //record the start time
  cout<<"Time sort started at: "<<startingTime<<"s."<<endl;

  QuickSort(arrayOfItems, 0, sizeOfArrayOfItemsToSort - 1); //begin quick sort

  float endingTime = ((float)clock()) / CLOCKS_PER_SEC; //record end time
  cout<<"Time sort ended at: "<<endingTime<<"s"<<endl;

  //report the results:
  float timeTaken = endingTime - startingTime;
  cout<<"Time sort took is: "<<timeTaken<<"s."<<endl;
  cout<<"The sorted array is: "<<endl;
  printArray(sizeOfArrayOfItemsToSort);
  cout<<endl;
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;

  cout<<endl;

}

//destructor
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

}
