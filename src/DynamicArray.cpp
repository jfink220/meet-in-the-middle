#include "DynamicArray.hpp"

DynamicArray::DynamicArray() : capacity(5), size(0), nums(new int[2]){
    // no-op
}
void DynamicArray::push_back(int num){
    if(size >= capacity){
        capacity *= 2;
        int* newArr = new int[capacity];
        for(int i=0; i < size; i++){
            newArr[i] = nums[i];
        }
        delete[] nums;
        nums = newArr;
    }
    nums[size] = num;
    size += 1;
}
int DynamicArray::getSize(){
    return size;
}
double DynamicArray::get(int index){
    if(nums == nullptr){
        std::cout << "Array not allocated";
        return -1;
    }else{
        return nums[index];
    }
}
DynamicArray::~DynamicArray(){
    delete[] nums;
    nums = nullptr;
}