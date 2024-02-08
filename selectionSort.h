/**
 * file:        selectionSort.h
 * author:      <your name>
 * date:        <date modified>
 * description: <short description about what this file does>
 */

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sort.h"

class SelectionSort : public Sort{

    public:
        SelectionSort(){
            name = "Selection Sort";
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement selection sort
            std::cout << "SelectionSort not implemented!" << std::endl;

        }
    
        //Feel Free to add additional functions as needed
};

#endif