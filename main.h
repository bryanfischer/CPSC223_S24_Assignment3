/**
 * file:        main.h
 * author:      <your name>
 * date:        <date modified>
 * description: <short description about what this file does>
 */

#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include "sort.h"
#include "bubbleSort.h"
#include "bubblesort_optimized.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "standardSort.h"

using namespace std;

void printVector(vector<int> &vec);
void fillVectorRandom(vector<int> &vec, int count);
void fillVectorAsc(vector<int> &vec, int count);
void fillVectorDsc(vector<int> &vec, int count);
void testSort(Sort* sort, vector<int> &vec, string initialCondition, int size, int iterationCount);

#endif