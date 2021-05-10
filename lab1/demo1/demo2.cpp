#include <iostream>

using namespace std;

struct animal {
   int num_teeth;
   int num_legs;
   string species;
};

int main(int argc, char **argv) {
   animal dog;
   dog.num_teeth = 32;

   animal *dog_ptr = &dog;

   (*dog_ptr).num_teeth = 5;

   dog_ptr->num_teeth = 5;

   int a = 5;
   int b = 7;

   float c = (float)a / (float)b;

   cout << c << endl;

   cout << "The dog has " << dog_ptr->num_teeth << " teeth\n";
   return 0;
}
