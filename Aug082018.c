//basically added
#include <stdio.h>
//Used in <Minimum and maximum values of integer types>
#include <limits.h>
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
    long    /    
    */

    return 0;
}
