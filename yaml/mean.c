/* File mean.c
 */
#include <stdio.h>

double mean(num,size)
double* num;
int size;
{
    int loop;
    double total = 0.0;

    for (loop=0; loop < size; loop++) total += num[loop];

    return total/size;
}

int main(argc, argv)
  int argc;
  char** argv;
  {

      double nums[] = {1.2, 2.3, 3,4};
      printf("The mean is: %f\n", mean(nums,3));
  }
