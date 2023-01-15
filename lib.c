#include <stdio.h>
#include <stdlib.h>
#include <math.h>


FILE * open_txt_r (FILE * filename)
{
    filename = fopen ("LR5.txt", "r");
    if (filename == NULL){
        printf ("Cannot open file!!!\n");

        exit(1);
    }
    return filename;
}
FILE * open_bin_r (FILE * filename)
{
    filename = fopen ("out_bin.bin", "rb");
    if (filename == NULL){
        printf ("Cannot open file!!!\n");

        exit(1);
    }
    return filename;
}
FILE * open_bin_w (FILE * filename)
{
    filename = fopen ("out_bin.bin", "wb");
    if (filename == NULL){
        printf ("Cannot open file!!!\n");

        exit(1);
    }
    return filename;
}
FILE * open_txt_w (FILE * filename)
{
    filename = fopen ("out.txt", "w");
    if (filename == NULL){
        printf ("Cannot open file!!!\n");

        exit(1);
    }
    return filename;
}
//-------------------------------------------//
double * memory_allocation (int size)
{
    double * matrix;
    matrix = (double *) malloc (size * sizeof(double));
    if (matrix == NULL){
        printf ("\nError\n");

        exit (1);
    }
    return matrix;
}
