#include <iostream>

using namespace std;

class Textbook {
   private:
      string title;
      int num_pages;
   public:
      Textbook();
      Textbook(string, int);
      Textbook(const Textbook &old);

      void set_title(string);
      void set_num_pages(int);
      
      string get_title() const;
      int get_num_pages() const;  

      Textbook &operator=(const Textbook &old);

};


Textbook::Textbook() {
   title = "No title given";
   num_pages = 0;
}

Textbook::Textbook(string title, int num_pages) {
   this->title = title;
   this->num_pages = num_pages;
}

Textbook::Textbook(const Textbook &old) {
   title = old.title;
   num_pages = old.num_pages;
}

Textbook& Textbook::operator=(const Textbook &old) {
   if (this == &old) {
      return *this;
   }
   this->title = old.title;
   this->num_pages = old.num_pages;
   return *this;
}

void Textbook::set_title(string t) {
   title = t;
}

void Textbook::set_num_pages(int n) {
   num_pages = n;
}

string Textbook::get_title() const {
   return title;
}

int Textbook::get_num_pages() const {
   return num_pages;
}

int main() {
   Textbook t1;
   t1.set_title("Intro to C++");
   t1.set_num_pages(50);

   Textbook t2("Advanced CS Topics", 500);

   cout << "t1: " << t1.get_title() << " has " << t1.get_num_pages() << " pages." << endl;

   cout << "t2: " << t2.get_title() << " has " << t2.get_num_pages() << " pages." << endl;

   return 0;
}
