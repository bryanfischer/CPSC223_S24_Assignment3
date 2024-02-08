/**
 * file:        tester.cpp
 * author:      <your name>
 * date:        <date modified>
 * description: <short description about what this file does>
 */

#ifndef TESTER_H
#define TESTER_H

#include<iostream>
#include "sort.h"
#include "bubbleSort.h"
#include "bubblesort_optimized.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "standardSort.h"

using namespace std;

void testSort(Sort* sort, vector<int> &vec, string initialCondition, int size, int iterationCount);

#endif