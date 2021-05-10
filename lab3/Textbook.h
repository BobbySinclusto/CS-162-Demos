#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <string>

using namespace std;

class Textbook {
   private:
      string title;
      int num_pages;
   public:
      Textbook();
      Textbook(string, int);

      void set_title(string);
      void set_num_pages(int);
      
      string get_title() const;
      int get_num_pages() const;  
};

#endif
