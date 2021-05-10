#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "multdiv.h"

using namespace std;

int main(int argc, char **argv) {
   cout.precision(3);
   int rows = 0;
   int cols = 0;
   if (argc != 3 || !is_valid_dimensions(argv[1], argv[2])) {
      cout << "Invalid size(s)!!!" << endl;
      validate_inputs(rows, cols);
   }
   else {
      rows = atoi(argv[1]);
      cols = atoi(argv[2]);
   }
   bool again = true;
   while (again) {
      multdiv_entry **table = create_table(rows, cols);
      print_table(table, rows, cols);
      delete_table(table, rows);
      cout << "Would you like to see a different size matrix (0-no, 1-yes)? ";
      string input;
      getline(cin, input);
      again = atoi(input.c_str());
      if (again) {
	 rows = cols = 0;
	 validate_inputs(rows, cols);
      }
   }
   return 0;
}
