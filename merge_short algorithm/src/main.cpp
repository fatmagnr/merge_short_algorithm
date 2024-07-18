#include <iostream>
#include "merge_sort.hpp"

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Given array is \n";
    printArray(arr, arr_size);
    
    mergeSort(arr, 0, arr_size - 1);
    
    std::cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
