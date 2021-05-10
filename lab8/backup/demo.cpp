#include <iostream>
#include <cmath>
#include "Array.hpp"
#include <stdexcept>

using namespace std;

bool is_int(string);
int get_int(string);

int main() {
    string input;

    while(true) {
        cout << "Would you like to continue? (1-yes, 0-no): ";
        getline(cin, input);
	int num;
	try {
	   num = get_int(input);
	   if(num == 0) {
	      return 0;
	   }
	   else if(num == 1) {
	      break;
	   }
	   cout << "invalid input, must be 1 or 0" << endl;
	}
	catch (std::invalid_argument e) {
	   cout << "invalid input, must be an integer" << endl;
	}

    }

    cout << "Enter the size of the array to generate: ";
    getline(cin, input);
    int size = get_int(input);
    Array<int> arr(size);
    for (int i = 0; i < size; ++i) {
       arr.get_arr()[i] = i;
    }
    arr.print();

    Array<string> arr2(2);
    arr2.get_arr()[0] = "item1";
    arr2.get_arr()[1] = "item2";
    arr2.print();

    return 0;
}

bool is_int(string num) {
   if (num.length() == 0)
      return false;
   if ((num.at(0) < '0' || num.at(0) > '9') && num.at(0) != '-')
      return false;
   for (int i=1; i<num.length(); i++) {
      if (num.at(i) < '0' || num.at(i) > '9')
	 return false;
   }
   return true;
}

int get_int(string prompt) {
   if (!is_int(prompt))
      throw std::invalid_argument("input must be an integer");
   bool is_negative = false;
   is_negative = prompt.at(0)=='-'? true : false;
   int result = 0;
   for (int i=is_negative?1:0; i<prompt.length(); i++) {
      char current = prompt.at(i);
      result += ((int)(current - '0') * pow(10, prompt.length()-i-1));
   }
   return is_negative? -result : result;
}
