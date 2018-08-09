#include <stdio.h>
//<Unit 8.0~8.2>

int main(){

    /*
    <Real numbers>
    Type                 /       Size             /            Range                 /   Significant fig.
    float               /   4byte (32bit)        /   1.175494e-38~3.402823e+38    /       7     (IEEE 754 single-precision floating-point)
    double               /   8byte (64bit)       /   2.225074e-308~1.797693e+308 /       16     (IEEE 754 double-precision floating-point)
    long double (Windows)   /   8byte (64bit)   /  2.225074e-308~1.797693e+308  /       16      (IEEE 754 double-precision floating-point)
    long double (Linux32)   /   12byte (96bit)   /  ??????????????????????????  /       ? 
    long double (Linux64)   /   16byte (128bit)   /  3.362103e-4932~1.189731e+4932  /       34  (IEEE 754 quadruple-precision floating-point)
    long double (MacOS)   /   16byte (128bit)   /  3.362103e-4932~1.189731e+4932  /       34    (IEEE 754 quadruple-precision floating-point)

    Scientific (exponential) Notation > k*10^n into ke+n, k*10^-n into ke-n
    ex) 6*10^15 = 6E+15, 3.61*10^-3 = 3.61E-3
    */
   float floaty = 1.4f;   // float adds 'f' after number
   double doubly = -3.356164E-3;    //  double doesn't add anything after number
   long double ldoubly = 3.32532l;   // long double adds 'l' after number

   printf("%f %f %Lf \n",floaty,doubly,ldoubly);
    // %f used for printing float and double (floating point)
    // %Lf used for printing long double (long floating point)

    /*
    IEEE 754
    <How to save(use) float/double (Floating point)>
    Usually used in 3D game engine development
    
    +(-) m*n^p
    sign: (+ or -) > first digit > 0 for +, 1 for -
    m - significand
    n - base (assumed to be 2)
    p - exponent

    Type    /   Size    /   Sign    /   Exponent /   significand
    float   /   32bit   /   1bit    /   8bit    /   23bit
    double  /   64bit   /   1biy    /   11bit   /   52bit

    */

   float float1 = 1.4e5f;   // float adds 'f' after number
   double double1 = -3.353e-3;    //  double doesn't add anything after number
   long double ldouble1 = 5.21e+9l;   // long double adds 'l' after number

   printf("%f %f %Lf \n",float1,double1,ldouble1);
   printf("%e %e %Le \n",float1,double1,ldouble1);
   //%e is used for printing float and double as scientific notation (exponential notation)
   //%Le is used for printing long double as scientific notation (long exponential notation)
    
    printf("float: %d, double: %d, long double: %d\n,",
    sizeof(floaty), // 4 - size of float
    sizeof(doubly), // 8 - size of double
    sizeof(ldoubly) // 8 or (12 or) 16 - size of long double
    );

    return 0;
}
