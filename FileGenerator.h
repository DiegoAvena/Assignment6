#ifndef FILE_GENERATOR_H
#define FILE_GENERATOR_H

#include <iostream>
#include <stdlib.h>
#include <fstream>

class FileGenerator {

public:
  FileGenerator();
  ~FileGenerator();
  void generateUnsortedDataFile(std::string fileName);
  void generateDescendingOrderDataFile(std::string fileName);

};

#endif
