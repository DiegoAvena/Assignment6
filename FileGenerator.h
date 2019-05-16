#ifndef FILE_GENERATOR_H
#define FILE_GENERATOR_H

#include <iostream>
#include <stdlib.h>
#include <fstream>

/*

-FileGenerator, contains the methods that allow for the
production of text files that can be used to test sorting algorithms like
quick sort, bubble sort, etc. Allows for an easier time in making super large text files.

*/
class FileGenerator {

public:
  FileGenerator(); //default constructor
  ~FileGenerator(); //destructor
  void generateUnsortedDataFile(std::string fileName); //generates an unsorted text file with
  void generateDescendingOrderDataFile(std::string fileName); //generates a text file with values ordered by descending order.
  void generateSortedDataFile(std::string fileName); //generates a sorted text file.

};

#endif
