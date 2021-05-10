#include <iostream>

using namespace std;

struct animal {
   string name;
   int age;
};

int** create_table(int rows, int cols);
void print_table(int **table, int rows, int cols);
void delete_table(int **table, int rows);

int main() {
   int rows = 4;
   int cols = 5;

   int **table = create_table(rows, cols);
   print_table(table, rows, cols);
   delete_table(table, rows);

   return 0;
}

int** create_table(int rows, int cols) {
   int **table = new int*[rows];
   for (int i = 0; i < rows; ++i) {
      table[i] = new int[cols];
   }

   for(int i = 0; i < rows; ++i) {
      for(int j = 0; j < cols; ++j) {
	 table[i][j] = i+j;
      }
   }

   return table;
}

void print_table(int **table, int rows, int cols) { 
   for(int i = 0; i < rows; ++i) {
      for(int j = 0; j < cols; ++j) {
	 cout << table[i][j] << "\t";
      }
      cout << "\n";
   }
}

void delete_table(int **table, int rows) {
   for (int i = 0; i<rows; ++i) {
      delete [] table[i];
   }
   delete [] table;
   table = NULL;
}
