//basically added
#include <stdio.h>

//Used in <Minimum and maximum values of integer types>
#include <limits.h>

//Used in <Size shown integers>
#include <stdint.h>

//<Unit 7.3~rest of unit 7>

int main(){
    //<Size of integer types>    
    int num1=0;
    int size;   

    size= sizeof num1;
    // size of parameter 'num1' (4, as int = 4 bytes)
    // CANNOT BE USED as: sizeof int;
    // should be written as: sizeof(int);
    printf("Size of num1 %d \n",size);


    printf("char: %ld, short: %ld, int: %ld, long: %ld, long long: %ld \n",
        sizeof(char),       //1 (1 byte)
        sizeof(short),      //2 (2 byte)
        sizeof(int),        //4 (4 byte)
        sizeof(long),       //4 in 32bit&windows_x64, 8 in 64-bit systems
        sizeof(long long)  // 8 (8 byte)
        // same when unsigned is added
    );


    //<Minimum and maximum values of integer types>
    //should do #include <limits.h>

    char charmin=CHAR_MIN;  //minimum value of char
    short shortmin=SHRT_MIN; //minimum value of short
    int intmin=INT_MIN;     //minimum value of int
    long longmin=LONG_MIN;  //minimum value of long
    long long longlongmin=LLONG_MIN;    //minimum value of long long

    printf("%d %d %d %ld %lld\n",charmin,shortmin,intmin,longmin,longlongmin);

    /*
    Types   /   Minimum     /   Maximum
    char    /   CHAR_MIN    /   CHAR_MAX
    short   /   SHRT_MIN    /   SHRT_MAX
    int     /   INT_MIN     /   INT_MAX
    long    /   LONG_MIN    /   LONG_MAX
    long long   /   LLONG_MIN   /   LLONG_MAX
    unsigned char   /   0   /   UCHAR_MAX
    unsigned short  /   0   /   USHRT_MAX
    unsigned int    /   0   /   UINT_MAX
    unsigned long   /   0   /   ULONG_MAX
    unsigned long long  /   0   /   ULLONG_MAX 
    */

   char charmaxovf = CHAR_MAX+1; // 1+CHAR_MAX > Overflow
   short shortmaxovf = SHRT_MAX+1; //1+SHRT_MAX > Overflow
   int intmaxovf = INT_MAX+1; // 1+INT_MAX > Overflow
   long long llongmaxovf = LLONG_MAX+1; // 1+LLONG_MAX > Overflow

   printf("%d %d %d %lld \n",charmaxovf,shortmaxovf,intmaxovf,llongmaxovf);

    unsigned char ucharmaxovf = UCHAR_MAX+1; // 1+UCHAR_MAX > Overflow
   unsigned short ushortmaxovf = USHRT_MAX+1; //1+USHRT_MAX > Overflow
   unsigned int uintmaxovf = UINT_MAX+1; // 1+UINT_MAX > Overflow
   unsigned long long ullongmaxovf = ULLONG_MAX+1; // 1+ULLONG_MAX > Overflow

   printf("%u %u %u %llu \n",ucharmaxovf,ushortmaxovf,uintmaxovf,ullongmaxovf);

    //OVERFLOW caused by PSY's Gangnam Style changed Youtube system: http://techneedle.com/archives/19447

    //Underflow
    
    char charminunf = CHAR_MIN-1; // CHAR_MIN-1 > Underflow
   short shortminunf = SHRT_MIN-1; //SHRT_MIN-1 > Underflow
   int intminunf = INT_MIN-1; // INT_MIN-1 > Underflow
   long long llongminunf = LLONG_MIN-1; // 1+LLONG_MAX > Underflow

   printf("%d %d %d %lld \n",charminunf,shortminunf,intminunf,llongminunf);

    unsigned char ucharminunf = 0-1; // Underflow
   unsigned short ushortminunf = 0-1; // Underflow
   unsigned int uintminunf = 0-1; // Underflow
   unsigned long long ullongminunf = 0-1; // Underflow

   printf("%u %u %u %llu \n",ucharminunf,ushortminunf,uintminunf,ullongminunf);
    
    //<Size shown integers>
    int8_t int8 = -128;     //8bit (1byte) - char
    int16_t int16 = 32767;  //16bit (2byte) - short
    int32_t int32 = 214345355;  //32bit (4byte) - int
    int64_t int64 = 1464661441437137; //64bit (8byte) - long long
    
    printf("%d %d %d %lld\n", int8, int16,int32,int64);

    uint8_t ui8 = 255; // 8bit (1byte) - unsigned char
    uint16_t ui16 = 65535; //16bit (2byte) - unsigned short
    uint32_t ui32 = 16523615; //32bit (4byte) - unsigned int
    uint64_t ui64 = 31521346421; //64bit (8byte) - unsigned long long

    printf("%u %u %u %llu \n", ui8, ui16, ui32, ui64);

    /*
    Types   /   Minimum     /   Maximum
    int8_t     /   INT8_MIN    /   INT8_MAX
    int16_t    /   INT16_MIN    /   INT16_MAX
    int32_t      /   INT32_MIN     /   INT32_MAX
    int64_t    /   INT64_MIN    /   INT64_MAX
    uint8_t   /   0   /   UINT8_MAX
    uint16_t  /   0   /   UINT16_MAX
    uint32_t    /   0   /   UINT32_MAX
    uint64_t   /   0   /   UINT64_MAX
    */

    return 0;
}
