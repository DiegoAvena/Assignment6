#include "SortingMachine.h"

using namespace std;

//default constructor, can be used to prompt the user for input file if the command line is not being read:
SortingMachine::SortingMachine() {

  arrayOfItemsToSort = NULL;
  numberOfItemsToSort = 0;
  indexOfWhereToInputNextItemIntoArray = 0;

  FileInputManager<SortingMachine> inputManager;

  string nameOfFileToReadFrom;
  cout<<"Insert the name of a file to read from..."<<endl;
  cin>>nameOfFileToReadFrom;

  inputManager.readFile(nameOfFileToReadFrom, *this);

}

//overrided constructor, used when the user provides the name of a file in the command line
SortingMachine::SortingMachine(string fileName) {

  arrayOfItemsToSort = NULL;
  numberOfItemsToSort = 0;
  indexOfWhereToInputNextItemIntoArray = 0;

  FileInputManager<SortingMachine> inputManager;

  /*

  -this calls the readFile method which in turn calls the
  readFromFileWithSpecificRules method here which leads the the
  initialization of the 3 items above

  */
  if (inputManager.readFile(fileName, *this) == false) {

    return;

  }

  cout<<"Array prior to any insortion is: "<<endl;

  for (int i = 0; i < numberOfItemsToSort; i++) {

    cout<<arrayOfItemsToSort[i]<<" ";

  }
  cout<<endl;
  cout<<endl;

  //do bubble sort
  BubbleSortManager bubbleSorter;
  bubbleSorter.bubbleSort(arrayOfItemsToSort, numberOfItemsToSort);

  //do insertion sort
  InsertionSortManager insertionSorter;
  insertionSorter.insertionSort(arrayOfItemsToSort, numberOfItemsToSort);

  //do quick sort
  QuickSortManager quickSorter(arrayOfItemsToSort, numberOfItemsToSort);

  //do merge sort
  MergeSortManager mergeSorter(arrayOfItemsToSort, numberOfItemsToSort);

}

//Destructor, used to delete the unsorted array that was allocated at the start:
SortingMachine::~SortingMachine() {

  delete[] arrayOfItemsToSort;

}

//creates the initial unsorted array:
void SortingMachine::readFromFileWithSpecificRules(string line) {

  if (arrayOfItemsToSort == NULL) {

    //this is the first line being read, which has the size the array should be, initialize it:
    numberOfItemsToSort = stoi(line);
    arrayOfItemsToSort = new double[numberOfItemsToSort];


  }
  else {

    //this is a line that contains a double that needs to be placed into the array:
    arrayOfItemsToSort[indexOfWhereToInputNextItemIntoArray] = stod(line);

    //move to next empty slot:
    indexOfWhereToInputNextItemIntoArray++;

  }
}
