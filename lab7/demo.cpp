#include <iostream>

using namespace std;

class base {
   private:
      int number;
   public:
      base(int);
      virtual void print();
      friend bool operator>(const base&, const base&);
};

bool operator>(const base& left, const base& right) {
   return left.number > right.number;
}

class derived : public base {
   private:
      string name;
   public:
      derived();
      derived(int, string);
      void print();
};

base::base(int n) {
   number = n;
}

void base::print() {
   cout << "number = " << number << endl;
}

derived::derived(int number = 0, string name = "default") : base(number) {
   this->name = name;
}

void derived::print() {
   base::print();
   cout << "name = " << name << endl;
}

int main() {
   derived *d_ptr = new derived(5, "Bobby");
   cout << "d_ptr:" << endl;
   d_ptr->print();

   cout << endl << "b_ptr: " << endl;
   base *b_ptr = d_ptr;

   b_ptr->print();

   base b1(4);
   base b2(6);

   if (b2 > b1) {
      cout << "true" << endl;
   }

   return 0;
}

