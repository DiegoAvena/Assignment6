#include "SortingMachine.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  //SortingMachine SortingMachine;
  if (argc > 1) {

    //user gave the name of a datafile to read from, which is at index 1 of argv:
    SortingMachine SortingMachine(argv[1]);

  }
  else {

    cout<<"No file given to sort, exiting..."<<endl;

  }


  return 0;
}
