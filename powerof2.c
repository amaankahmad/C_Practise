#include <stdio.h>

 int main() {
   int base,upper;
   int power, result;
   power = 0;
   base = 2;
   upper = 128;

   for (result = 1; result <= upper; power++) {
     result*=base
     printf("%d^%d=%d\n",base,power,result)
   }
}

//   int power,base;
//   int result, upper;
//
//   power = 0;
//   base = 2;
//   upper = 128;
//   result = 1;
//
//   while (result <= upper){
//     printf("%d^%d=%d\n",base,power,result);
//     result*=base;
//     power++;
//   }
// }
