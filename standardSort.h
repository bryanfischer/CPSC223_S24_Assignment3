/**
 * file:        standardSort.h
 * author:      <your name>
 * date:        <date modified>
 * description: <short description about what this file does>
 */

#include "sort.h"
#include<algorithm>

class StandardSort : public Sort{

    public:
        StandardSort(){
            name = "std::sort";
        }

        void doSort(std::vector<int> &vec) {
            std::sort(vec.begin(), vec.end());
        }

};