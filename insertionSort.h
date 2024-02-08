/**
 * file:        insertionSort.h
 * author:      <your name>
 * date:        <date modified>
 * description: <short description about what this file does>
 */

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "sort.h"

class InsertionSort : public Sort{

    public:
        InsertionSort(){
            name = "Insertion Sort";
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement insertion sort
            std::cout << "InsertionSort not implemented!" << std::endl;

        }

    //feel free to add additional functions as needed
};

#endif