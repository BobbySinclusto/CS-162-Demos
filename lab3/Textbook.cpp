#include "Textbook.h"
#include <string>

using namespace std;

Textbook::Textbook() {
   title = "No title given";
   num_pages = 0;
}

Textbook::Textbook(string title, int num_pages) {
   this->title = title;
   this->num_pages = num_pages;
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
