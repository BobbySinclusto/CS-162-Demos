#include <iostream>
#include "Point.h"

using namespace std;

int main() {
   Point p1(2, 3);
   cout << "p1:" << endl;
   p1.print();
   cout << endl;

   Point p2 = p1;
   cout << "p2:" << endl;
   p2.print();
   cout << endl;

   Point p3(3, 5, 6);
   cout << "p3:" << endl;
   p3.print();
   cout << endl;

   p3 = p2;
   cout << "result of p3 = p2:" << endl;
   p3.print();

   return 0;
}
