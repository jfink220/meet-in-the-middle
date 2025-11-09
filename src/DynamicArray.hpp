#pragma once
#include <iostream>
class DynamicArray{
    private:
        int* nums;
        int capacity;
        int size;
    public:
        DynamicArray();
        ~DynamicArray();
        void push_back(int num);
        int getSize();
        double get(int index);
};