#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

#include "multdiv.h"

using namespace std;

void validate_inputs(int &rows) { 
   string input;
   do {
      cout << "Enter an integer greater than 0 for size: ";
      getline(cin, input);
      rows = atoi(input.c_str());
   } while (rows <= 0);
}

bool is_valid_dimensions(char *m, char *n) {
   return atoi(m) > 0 && atoi(n) > 0;
}

multdiv_entry** create_table(int row) {
   multdiv_entry **table = new multdiv_entry*[row];
   for (int i = 0; i < row; ++i) {
      table[i] = new multdiv_entry[row];
      for (int j = 0; j < row; ++j) {
	 table[i][j].mult = (i+1)*(j+1);
	 table[i][j].div = float(i+1)/(j+1);
      }
   }
   return table;
}

void print_table(multdiv_entry **tables, int row) {
   cout << "Multiplication Table:" << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < row; ++j) {
	 cout << tables[i][j].mult << "\t";
      }
      cout << endl;
   }
   cout << "\nDivision Table:" << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < row; ++j) {
	 cout << tables[i][j].div << "\t";
      }
      cout << endl;
   }
   cout << endl;
}

void delete_table(multdiv_entry **tables, int row) {
   for (int i = 0; i < row; ++i) {
      delete [] tables[i];
   }
   delete [] tables;
}
