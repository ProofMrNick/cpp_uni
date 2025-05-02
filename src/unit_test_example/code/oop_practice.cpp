
#include "oop_practice.hpp"


// void sort(double arr[], int size, std::string order);
/*
int main() {
    
    int  = {1, 5, 3, 8, 2, 99, 0, 12};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size, "asc");
    
    return 0;
}
*/
void OopPractice::sort(std::vector<int> arr) {
   int temp;
   for (int i = 0; i < arr.size(); i++) {
       for (int j = 1; j < arr.size() - i; j++) {
           if (arr[j - 1] > arr[j]) {
               temp = arr[j - 1];
               arr[j - 1] = arr[j];
               arr[j] = temp;
           }
       }
   }
   
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    
}