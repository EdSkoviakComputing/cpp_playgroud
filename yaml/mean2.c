/* File mean2.c
 */
#include <stdio.h>

double mean(double *num, int size)
{
    double total = 0.0;

    for (int loop=0; loop < size; loop++) total += num[loop];

    return total/size;
}

int main(int argc, char** argv)
  {
      double nums[] = {1.2, 2.3, 3,4};
      printf("The mean is: %f\n", mean(nums,3));
  }
