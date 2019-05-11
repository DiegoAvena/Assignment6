#include "FileGenerator.h"

using namespace std;

FileGenerator::FileGenerator() {

}

FileGenerator::~FileGenerator() {

}

void FileGenerator::generateUnsortedDataFile(string fileName) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(fileName, ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  int randomNumber;

  for (int i = 0; i < dataSize; i++) {

    randomNumber = rand() % dataSize + 1;
    fileToWriteTo<<randomNumber<<endl;

  }

  fileToWriteTo.close();

}

void FileGenerator::generateDescendingOrderDataFile(string fileName) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(fileName, ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  while (dataSize > 0) {

    fileToWriteTo<<dataSize<<endl;
    dataSize--;

  }

  fileToWriteTo.close();

}

//generate files with numbers in descending order
/*if (argc > 1) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(argv[1], ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  while (dataSize > 0) {

    fileToWriteTo<<dataSize<<endl;
    dataSize--;

  }

  fileToWriteTo.close();

}*/

//For making unsorted text files:
/*
srand(time(NULL));

if (argc > 1) {

  ofstream fileToWriteTo;
  fileToWriteTo.open(argv[1], ios::trunc);

  cout<<"Enter number of values to sort: "<<endl;
  int dataSize;
  cin>>dataSize;
  fileToWriteTo<<dataSize<<endl;

  int randomNumber;

  for (int i = 0; i < dataSize; i++) {

    randomNumber = rand() % dataSize + 1;
    fileToWriteTo<<randomNumber<<endl;

  }

  fileToWriteTo.close();

}*/
