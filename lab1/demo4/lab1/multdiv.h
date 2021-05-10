#ifndef MULTDIV_H
#define MULTDIV_H

struct multdiv_entry {
   int mult;
   float div;
};

bool is_valid_dimensions(char *m);
multdiv_entry** create_table(int row);
void print_table (multdiv_entry** tables, int row);
void delete_table(multdiv_entry** tables, int row);
void validate_inputs(int &rows);

#endif
