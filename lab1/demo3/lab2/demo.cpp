#include <iostream>

using namespace std;

void bubblesort(int arr[], int size) {
   for (int j = 0; j < size; ++j) {
      for (int i = 0; i < size-1; ++i) {
	 if (arr[i] > arr[i+1]) {
	    int tmp = arr[i];
	    arr[i] = arr[i+1];
	    arr[i+1] = tmp;
	 }
      }
   }
}

int num_unique(arr, size) {
   for (int i = 0; i < size-1; ++i) {
      if (arr[i] != arr[i+1]) {
	 size--;
      }
   }
   return size;
}


int main() {
   int size =5;
   int arr[5] = {4, 6, 4, 3, 5};

   bubblesort(arr, size);

   for (int i = 0; i < size; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}
