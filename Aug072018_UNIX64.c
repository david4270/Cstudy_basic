#include <stdio.h>

//<Unit 6~7.2>

int main(){
    /*
    Break point (Red dot)
    can be located next to the line number
    (where you want to stop the code)
    */

    /*
    Integers
    - signed - integers with plus/minus
        ('signed' is usually skipped)
    - unsigned - positive integers

    1. (signed) char - 1 byte (8 bit) > -128~127
        Front digit is representing plus(0)/minus(1)
        * Use %d to print
    2. unsigned char - 1 byte (8 bit) > 0~255
        * Use %d or %u to print
    */
   char char1 = 127; //0111 1111 in binary
   signed char char2 = -128; //1000 0000 in binary
   char char3 = -1; // 1111 1111 in binary
   char char4 = 128; // OVERFLOW > print 1000 0000 (-128) instead
   printf("%d %d %d %d\n",char1, char2, char3, char4);
   
   unsigned char uchar1 = 255; //1111 1111 in binary
   unsigned char uchar2 = 256;  // OVERFLOW > print 0000 0000 (0)
    printf ("%d %u\n",uchar1, uchar2);

    /*
    3. (signed) short (int) - 2 byte (16bit) > -32,768~32,767
        Front digit is representing plus(0)/minus(1)
        * Use %d to print
    4. unsigned short (int) - 2 byte (16bit) > 0~65,535
        * Use %d or %u to print (%u -unsigned decimal)
    */
   signed short short1 = -32768; //1000 0000 0000 0000 in binary
   signed short int short2 = 32767; //0111 1111 1111 1111 in binary
   short int short3 = 32768; // OVERFLOW - 1000 0000 0000 0000 in binary
   short short4 = -32769; // UNDERFLOW - 0111 1111 1111 1111 in binary
   printf("%d %d %d %d\n",short1, short2, short3, short4);

   unsigned short int ushort1 = 65535; // 1111 1111 1111 1111 in binary
   unsigned short ushort2 = 65536; // OVERFLOW - 0000 0000 0000 0000 in binary
   printf ("%d %u\n",ushort1, ushort2);

   /*
    5. (signed) int - 4 byte (32bit) > -2,147,483,648~ 2,147,483,647
        Front digit is representing plus(0)/minus(1)
        * Use %d to print
    6. unsigned (int) - 4 byte (32bit) > 0~4,294,967,295
        * Use %u to print
    //in most of operating systems (32-bit and 64bit windows)
    7. (signed) long (int) - 4 byte (32bit) > -2,147,483,648~ 2,147,483,647
        Front digit is representing plus(0)/minus(1)
        * Use %ld to print (long decimal)
    8. unsigned long (int) - 4 byte (32bit) > 0~4,294,967,295
        * Use %lu to print (long unsigned decimal)
    */

   signed int int1 = 2147483647; // Binary - 0111 1111 1111 1111 1111 1111 1111 1111
   int int2 = 2147483648; //OVERFLOW (-2,147,483,648) - 1000 0000 0000 0000 0000 0000 0000 0000 in binary
   printf("%d %d \n",int1,int2);

   unsigned int uint1 = 4294967295; // Binary - 1111 1111 1111 1111 1111 1111 1111 1111
   unsigned uint2 = 4294967296; // OVERFLOW (print 0) - 0000 0000 0000 0000 0000 0000 0000 0000 in binary
   printf("%u %u \n",uint1,uint2);

    /*
    Run this in 32-bit system or 64-bit windows.
    !! Overflow does not occur in 64-bit UNIX-based systems
    */
   /*
   signed long int longint1 = 2147483647; // Binary - 0111 1111 1111 1111 1111 1111 1111 1111
   signed long longint2 = 2147483648; //OVERFLOW occurs in windows 64-bit (-2,147,483,648) - 1000 0000 0000 0000 0000 0000 0000 0000 in binary
   long int longint3 = -2147483648; // Binary - 1000 0000 0000 0000 0000 0000 0000 0000
   long longint4= -2147483649; //UNDERFLOW occurs in windows 64-bit (2,147,483,647) - 0111 1111 1111 1111 1111 1111 1111 1111 in binary
   printf("%ld %ld %ld %ld\n", longint1, longint2, longint3, longint4);

   unsigned long ulongint1 = 4294967295; // Binary - 1111 1111 1111 1111 1111 1111 1111 1111
   unsigned long int ulongint2 = 4294967296; // OVERFLOW (print 0) - 0000 0000 0000 0000 0000 0000 0000 0000 in binary
   printf("%lu %lu \n",ulongint1,ulongint2);
   */


   /*
   *** In UNIX-based 64bit systems
     7. (signed) long (int) - 8 byte (64bit) 
        > -9,223,372,036,854,775,808~9,223,372,036,854,775,807
        Front digit is representing plus(0)/minus(1)
        * Use %ld to print (long decimal)
    8. unsigned long (int) - 8 byte (64bit) 
        > 0~18,446,744,073,709,551,615
        * Use %lu to print (long unsigned decimal)

    9. (signed) long long (int) - 8 byte (64bit) 
        > -9,223,372,036,854,775,808~9,223,372,036,854,775,807
        Front digit is representing plus(0)/minus(1)
        * Use %lld to print (long long decimal)   
    10. unsigned long long (int) - 8 byte (64bit) 
        > 0~18,446,744,073,709,551,615
        * Use %llu to print (long long unsigned decimal)    
    */

   signed long int longint1 = -9223372036854775808;
   signed long longint2 =  9223372036854775808; // OVERFLOW - -9223372036854775808
   long int longint3 = -9223372036854775809; // UNDERFLOW - 9223372036854775807 
   long longint4= 9223372036854775807;
   printf("%ld %ld %ld %ld\n", longint1, longint2, longint3, longint4);

   unsigned long ulongint1 = 18446744073709551616; // OVERFLOW - 0
   unsigned long int ulongint2 = 18446744073709551615;
   printf("%lu %lu \n",ulongint1,ulongint2);
   

   signed long long int longlongint1 = -9223372036854775808; 
   signed long long longlongint2 = 9223372036854775808; // OVERFLOW - -9223372036854775808
   long long int longlongint3 = -9223372036854775809; // UNDERFLOW - 9223372036854775807 
   long long longlongint4 = 9223372036854775807;
   printf("%lld %lld %lld %lld\n", longlongint1,longlongint2,longlongint3,longlongint4);

   unsigned long long ulonglongint1 = 18446744073709551616; // OVERFLOW - 0
   unsigned long long int ulonglongint2 = 18446744073709551615;
   printf("%llu %llu \n",ulonglongint1,ulonglongint2);

   /*
   Overflow (Too big) - Start with smallest number
        char char4 = 128; // OVERFLOW > print 1000 0000 (-128) instead
   Underflow (too small) - Start with largest number
        short short4 = -32769; // UNDERFLOW - 0111 1111 1111 1111 in binary 
   */



}
