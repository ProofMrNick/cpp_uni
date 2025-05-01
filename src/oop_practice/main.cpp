
#include <iostream>


void sort(double arr[], int size, std::string order);

int main() {
    
    double arr[8] = {1, 5, 3, 8, 2, 99, 0, 12};
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << " - unsorted \n";
    
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size, "asc");
    
    return 0;
}

void sort(double arr[], int size, std::string order) {
   double temp;
   for (int i = 0; i < size; i++) {
       for (int j = 1; j < size - i; j++) {
           if (!(order == "asc") ? (arr[j - 1] < arr[j]) : (arr[j - 1] > arr[j])) {
               temp = arr[j - 1];
               arr[j - 1] = arr[j];
               arr[j] = temp;
           }
       }
   }
   
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << " - sorted";
    
    
    std::cout << "\n**********************";
    std::cout << "\nPress ENTER to exit... ";
    std::cin.get();
}