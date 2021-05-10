#include "student_db.h"
#include <iostream>
#include <fstream>

using namespace std;

student * create_student_db(int size) {
   return new student[size];
}

void populate_student_db_info(student *, int, ifstream &) {

}

