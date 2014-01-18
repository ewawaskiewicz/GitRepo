#include <iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"

void areEquals(double expected, double got)
{

   if (expected != got)
   {
      std::cout << "Expected was" << expected << "but is" << got << std::endl;
   }
}

int main()
{
   areEquals(4, add(2, 2));
   areEquals(4, multiply(2, 2));
   areEquals(4, pow(2, 2));
   
   return 0;
}