#include <iostream>
#include "Textbook.h"

using namespace std;

int main() {
   Textbook t1;
   cout << "t1: " << t1.get_title() << " has " << t1.get_num_pages() << " pages." << endl;

   //t1.title = "asdfasdf";
   //cout << t1.title << endl;

   t1.set_title("Intro to C++");
   t1.set_num_pages(50);

   Textbook t2("Advanced CS Topics", 500);

   cout << "t1: " << t1.get_title() << " has " << t1.get_num_pages() << " pages." << endl;

   cout << "t2: " << t2.get_title() << " has " << t2.get_num_pages() << " pages." << endl;

   return 0;
}
