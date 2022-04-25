/* File mean2.c
 */
#include <iostream>

double mean(double *num, int size)
{
    double total = 0.0;

    for (int loop=0; loop < size; loop++) total += num[loop];

    return total/size;
}

int main(int argc, char** argv)
  {
      double nums[] = {1.2, 2.3, 3,4};
      std::cout << "The mean is: " <<  mean(nums,3);
  }
