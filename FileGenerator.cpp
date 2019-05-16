#include "FileGenerator.h"

using namespace std;

//default constructor
FileGenerator::FileGenerator() {

}

//destructor
FileGenerator::~FileGenerator() {

}

//generates an unsorted text file with
void FileGenerator::generateUnsortedDataFile(string fileName) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(fileName, ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  double randomNumber;

  for (int i = 0; i < dataSize; i++) {

    randomNumber = (double)rand() / (RAND_MAX/dataSize); //how to generate random double values: https://stackoverflow.com/questions/686353/random-float-number-generation
    fileToWriteTo<<randomNumber<<endl;

  }

  fileToWriteTo.close();

}

//generates a text file with values ordered by descending order.
void FileGenerator::generateDescendingOrderDataFile(string fileName) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(fileName, ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  double number;
  while (dataSize > 0) {

    number = dataSize;
    fileToWriteTo<<number<<endl;
    dataSize--;

  }

  fileToWriteTo.close();

}

//generates a sorted text file.
void FileGenerator::generateSortedDataFile(string fileName) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(fileName, ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  double number; //the double to write
  for (int i = 0; i < dataSize; i++) {

    number = i;
    fileToWriteTo<<number<<endl;

  }

  fileToWriteTo.close();

}
