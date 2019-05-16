#include "BubbleSortManager.h"
using namespace std;

//default constructor
BubbleSortManager::BubbleSortManager() {

}

//destructor
BubbleSortManager::~BubbleSortManager() {

}

//Performs bubble sort from least to greates on the provided array of doubles
void BubbleSortManager::bubbleSort(double* arrayOfItemsToCopyAndSort, int sizeOfArrayOfItemsToSort) {

  copyArray(arrayOfItemsToCopyAndSort, sizeOfArrayOfItemsToSort); //create a copy of the array

  cout<<"----------------------------------------------------------------------------------------------------"<<endl;
  cout<<"BUBBLE SORT"<<std::endl;

  float startingTime = ((float)clock()) / CLOCKS_PER_SEC; //record the starting time

  cout<<"Time sort started at: "<<startingTime<<"s."<<endl;

  //start bubble sorting
  for (int i = 0; i < sizeOfArrayOfItemsToSort; i++) {

    for (int j = 0; j < sizeOfArrayOfItemsToSort - 1; j++) {

      if (arrayOfItems[j] > arrayOfItems[j+1]) {

        //swap, the item on the left side of the current item is smaller:
        double tempValue = arrayOfItems[j + 1];
        arrayOfItems[j + 1] = arrayOfItems[j];
        arrayOfItems[j] = tempValue;

      }

    }

  }

  float endingTime = ((float)clock()) / CLOCKS_PER_SEC; //record the end time
  cout<<"Time sort ended at: "<<endingTime<<"s."<<endl;

  float timeTaken = endingTime - startingTime; //record how long sort took

  //print final results
  cout<<"Time sort took is: "<<timeTaken<<"s."<<endl;
  cout<<"The sorted array is: "<<endl;
  printArray(sizeOfArrayOfItemsToSort);
  cout<<endl;
  cout<<"----------------------------------------------------------------------------------------------------"<<endl;

}
