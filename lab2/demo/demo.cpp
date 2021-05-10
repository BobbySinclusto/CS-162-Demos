#include <iostream>

using namespace std;

void print(int *arr, int size) {
   for (int i = 0; i < size; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;
}

void swap(int *xp, int *yp) {  
   int temp = *xp;  
   *xp = *yp;  
   *yp = temp;  
}  

void bubbleSort(int arr[], int n) {  
   int i, j;  
   for (i = 0; i < n-1; i++)      
      for (j = 0; j < n-i-1; j++)  
	 if (arr[j] > arr[j+1])  
	    swap(&arr[j], &arr[j+1]);  
}  

int main() {
   int size = 5;
   int arr[] = {3, 2, 5, 4, 1};
   print(arr, size);
   sort(arr, size);
   print(arr, size);

   return 0;
}
