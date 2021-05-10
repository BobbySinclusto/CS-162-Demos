#include <iostream>

using namespace std;

class Animal {
   protected:
      int num_legs;
      string name;
   public:
      Animal(int);
      void print();
};

class Dog : public Animal {
   private:
   public:
      Dog();
      void set_name(string);
      void print();
      bool operator< (const Dog &right) {
	 return this->num_teeth < right.num_teeth;
      }
      int get_num_teeth() {
	 return num_teeth;
      }
      
      int num_teeth;

      // friend bool operator> (const Dog &left, const Dog &right);
};

// in .h file
bool operator> (const Dog &left, const Dog &right);

// in .cpp
bool operator> (const Dog &left, const Dog &right) {
   return left.num_teeth > right.num_teeth;
}

Animal::Animal(int a): num_legs(a) {
   name = "Default Animal Name";
}

void Animal::print() {
   cout << name << " has " << num_legs << " legs." << endl;
}

Dog::Dog(): Animal(4) {
   num_teeth = 32;
}

void Dog::print(){
   Animal::print();
   cout << name << " has " << num_teeth << " teeth." << endl;
}

void Dog::set_name(string n) {
   name = n;
}

int main() {
   Animal a(8);
   a.print();
   cout << endl;
   
   Dog d1;
   Dog d2;

   cout << (d1 < d2) << endl;
   d1.set_name("Bob");
   d1.print();
   return 0;
}
