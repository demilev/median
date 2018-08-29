Median Data Structure
=====================
This repo contains c++ [implementation](https://github.com/demilev/median/blob/master/src/median.cpp) of data structure for finding median.
The implementation is done with two heaps(max\_heap & min\_heap). The invariant is
that on every insertion in the data structure the max_heap has one element more
than the min\_heap and the top of the max\_heap is the median or that both heaps have the
same number of elements and the median is the average of the top elements of the heaps.
This implementation gives O(lgn) time complexity on insertion and O(1) time complexity
on getting the median.

Requirements
------------
In order to use the project you will need C++ compiler and CMake version >= 3.5.

Building
--------
 ```bash
  $ # clone the repo 
  $ cd median
  $ mkdir build && cd build
  $ cmake ..
  $ make
  ```
After that you can run the tests.
  ```bash
  $ make test
  ```
Interface
---------
The data structure provides the following interface:
  ```c++
  class MedianStructure
  { 
    public:
        MedianStructure& insert(const double);
        double getMedian(); 
  };
  ```
License
-------
This program is provided under an MIT open source license, read the [LICENSE](https://github.com/demilev/median/blob/master/LICENSE) file for details.
