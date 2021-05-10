#ifndef STUDENT_DB_H
#define STUDENT_DB_H

#include <iostream>
#include <ifstream>

using namespace std;

struct student_db {
   string id;
   string fname;
   string lastname;
   string major;
};

student * create_student_db(int);
void populate_student_db_info(student *, int, ifstream &);
void delete_student_db_info(student **, int);

#endif
