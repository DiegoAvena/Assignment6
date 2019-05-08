#include "SortingMachine.h"

using namespace std;

//default constructor, used to initialize all values and read the file to create an array:
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

SortingMachine::SortingMachine(string fileName) {

  arrayOfItemsToSort = NULL;
  numberOfItemsToSort = 0;
  indexOfWhereToInputNextItemIntoArray = 0;

  FileInputManager<SortingMachine> inputManager;

  inputManager.readFile(fileName, *this);

  cout<<"Array prior to any insortion is: "<<endl;

  for (int i = 0; i < numberOfItemsToSort; i++) {

    cout<<arrayOfItemsToSort[i];

  }
  cout<<endl;
  cout<<endl;

  BubbleSortManager bubbleSorter;
  bubbleSorter.bubbleSort(arrayOfItemsToSort, numberOfItemsToSort);

  InsertionSortManager insertionSorter;
  insertionSorter.insertionSort(arrayOfItemsToSort, numberOfItemsToSort);

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
