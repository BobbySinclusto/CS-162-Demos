#include "Point.h"
#include <iostream>

using namespace std;

Point::Point() {
   num_coords = 0;
   coords = NULL;
}

Point::Point(int x, int y) {
   num_coords = 2;
   coords = new int[2];
   coords[0] = x;
   coords[1] = y;
}

Point::Point(int x, int y, int z) {
   num_coords = 3;
   coords = new int[3];
   coords[0] = x;
   coords[1] = y;
   coords[2] = z;
}

Point::Point(const Point &old) {
   cout << "copy constructor" << endl;
   num_coords = old.num_coords;

   coords = new int[num_coords];
   for (int i = 0; i < num_coords; i++) {
      coords[i] = old.coords[i];
   }
}

void Point::add_coordinate(int p) {
   int *tmp = new int[num_coords + 1];
   
   for (int i = 0; i < num_coords; i++) {
      tmp[i] = coords[i];
   }

   tmp[num_coords] = p;
   num_coords++;
}

Point::~Point() {
   cout << "destructor" << endl;
   delete [] coords;
   coords = NULL;
}

const Point& Point::operator=(const Point &old) {
   cout << "assignment operator overload" << endl;

}

void Point::print() {
   for (int i = 0; i < num_coords; ++i) {
      std::cout << coords[i] << " ";
   }
   std::cout << std::endl;
}
