#pragma once
#include "SortBase.h"

class QuickSort : public SortBase
{
public:
    QuickSort() {};
    ~QuickSort() {};

    void quickSort(int, int);
    int Organize(int, int);
    void swap(int, int);
    void sort();

};

