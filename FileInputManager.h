#ifndef FILE_INPUT_MANAGER_H
#define FILE_INPUT_MANAGER_H

#include <fstream>
#include <iostream>

template <typename dataType>

/*

-Allows for the reading of a .txt file into the data slots for a class, using a method called readFromFileWithSpecificRules() that
must be defined in the class using this class to follow more specific rules for reading from the file and filling in the data slots.

*/
class FileInputManager {

public:

  //default constructor
  FileInputManager() {

  }

  //Destructor
  ~FileInputManager() {

  }

  //reads from the specified file and if it does not exist, tells the user that the file could not be opened
  bool readFile(std::string fileName, dataType& objectToBuildUsingTheTextFile) {

    std::ifstream fileToReadFrom(fileName);

    if (fileToReadFrom.is_open()) {
      //the file sucessfully opened:

      std::cout<<"FILE OPENED..."<<std::endl;
      std::string line;

      while (getline(fileToReadFrom, line)) {

        //fill in the correct data slots of this object by following its rules for reading from a file:
        objectToBuildUsingTheTextFile.readFromFileWithSpecificRules(line);

      }

      fileToReadFrom.close();
      return true;

    }
    else {

      //file could not be opened because it did not exist
      std::cout<<"Sorry, but there is no file with data to sort, exiting..."<<std::endl;
      return false;
      
    }

  }

};

#endif
