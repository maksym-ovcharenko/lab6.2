#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include <stdio.h>

FILE * open_txt_r (FILE * filename);

FILE * open_bin_r (FILE * filename);

FILE * open_bin_w (FILE * filename);

FILE * open_txt_w (FILE * filename);

//-------------------------------------------//
double * memory_allocation (int size);


#endif // LIB_H_INCLUDED
