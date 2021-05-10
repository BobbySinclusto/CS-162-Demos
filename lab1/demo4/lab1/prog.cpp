#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "multdiv.h"

using namespace std;

int main(int argc, char **argv) {
   cout.precision(3);
   int rows = 0;
   if (argc != 2 || !is_valid_dimensions(argv[1])) {
      cout << "Invalid size(s)!!!" << endl;
      validate_inputs(rows);
   }
   else {
      rows = atoi(argv[1]);
   }
   bool again = true;
   while (again) {
      multdiv_entry **table = create_table(rows);
      print_table(table, rows);
      delete_table(table, rows);
      cout << "Would you like to see a different size matrix (0-no, 1-yes)? ";
      string input;
      getline(cin, input);
      again = atoi(input.c_str());
      if (again) {
	 rows = 0;
	 validate_inputs(rows);
      }
   }
   return 0;
}
