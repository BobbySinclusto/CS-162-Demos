#ifndef MULTDIV_H
#define MULTDIV_H

struct multdiv_entry {
   int mult;
   float div;
};

bool is_valid_dimensions(char *m, char *n);
multdiv_entry** create_table(int row, int col);
void print_table (multdiv_entry** tables, int row, int col);
void delete_table(multdiv_entry** tables, int row);
void validate_inputs(int &rows, int &cols);

#endif
