/**
 * file:        main.cpp
 * author:      <your name>
 * date:        <date modified>
 * description: <short description about what this file does>
 */

#include<iostream>
#include<vector>
#include "main.h"

int main(int argc, char *argv[]){

    int n;

    if(argc == 2){
        n = std::stoi(argv[1]);
    }else{
        std::cout << "n size not specified, defaulting to 1000" << std::endl;
        n = 1000;
    }

    //set the random seed to the current time
    //gives a better chance at generating different numbers each run
    srand(time(0));
    
    //create an initial vector to hold integers
    std::vector<int> vec; 

    //create a vector of sort pointers
    std::vector<Sort*> sortVector;

    //***********************************************
    //TODO:
    // 
    // optimized bubble sort
    // selection sort
    // insertion sort
    // standardSort - already provided by c++
    // 

    //add bubble sort to vector

    //add optimized bubble sort to vector

    //add selection sort to vector

    //add insertion sort to vector

    //add standard sort to vector
    StandardSort * standardSort = new StandardSort();
    sortVector.push_back(standardSort);

    //go through each object in the vector and test each sort
    for(std::size_t i = 0; i < sortVector.size(); i++){
        std::cout << "--------------------------------------------------------------------------------" << std::endl;
        std::cout << sortVector.at(i)->toString() << std::endl;
        testSort(sortVector.at(i), vec, "Ascending", n, 5);
        testSort(sortVector.at(i), vec, "Descending", n, 5);
        testSort(sortVector.at(i), vec, "Random", n, 5);
        std::cout << "--------------------------------------------------------------------------------" << std::endl;

    }

    //delete the sort pointers created above
    delete standardSort;

    return 0;
}

void testSort(Sort* sort, std::vector<int> &vec, std::string initialCondition, int size, int iterationCount){
    
    double averageTime = 0.0;
    std::string results;

    for(int i = 0; i < iterationCount; i++){

        //fill the vector with data
        if(initialCondition == "Random"){
            fillVectorRandom(vec, size);
        }else if(initialCondition == "Ascending"){
            fillVectorAsc(vec, size);
        }else if(initialCondition == "Descending"){
            fillVectorDsc(vec, size);
        }

        //sort the data
        sort->sortVector(vec);

        //verify data is sorted correctly
        sort->checkSorted(vec);

        //keep track of time
        averageTime += sort->sortTime;

        //clear the vector
        vec.clear();
    }

    //calculate the average time
    averageTime = averageTime / iterationCount;

    //output information to console
    // **Hint**
    // 
    // using the linux commandline > for easier logging to file if needed!
    //
    // keep this original output format for your final submission
    printf("%s, input data: %s, n=%d, average time: %.4f secs\n", sort->name.c_str(), initialCondition.c_str(), size, averageTime);

}

void printVector(std::vector<int> &vec){
    for(std::size_t i = 0; i < vec.size(); i++){
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;
}

void fillVectorRandom(std::vector<int> &vec, int count){

    int min = 0;
    int max = 1000000000;

    for(int i = 0; i < count; i++){
        vec.push_back(rand() % (max - min) + min);
    }

}

void fillVectorAsc(std::vector<int> &vec, int count){

    for(int i = 0; i < count; i++){
        vec.push_back(i);
    }

}

void fillVectorDsc(std::vector<int> &vec, int count){

    for(int i = count; i > 0; i--){
        vec.push_back(i);
    }

}



