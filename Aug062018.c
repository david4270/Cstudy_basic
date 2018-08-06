#include <stdio.h>

int main(){
    //<Unit 4, 5>
    //How to write C codes

    printf("Hello,world! \n");
    printf("Hello, %s \n", "World!");

    /*
    1. semicolon (;) is required to run code. 

    2. If the function is continued ex) if, for
    then semicolon is not required
    ex) if(x>10){
        printf("a");
    }

    3. {} is used to show the range of function 
         ('if' funciton above prints 'a')
    4. Indent is used (space and tab) to read code easily
    
    */
    
    int num1; 
    
    /*
    integer 'num1' is defined. It is a parameter which is 'announced'

    * char, short, int, long > integers (different size)
    * float, double > Real numbers
    * void > no form
    
    <How to name parameter>
    1. Alphabets and numbers can be used
    2. Upper and lower cases are sorted
    3. CANNOT be started with number (should start with alphabet)
    4. Should not be keywords of C lang (int, short, long, float, void, if, for, while, switch, ...)
    ex) int if; (X)
    ex) double _Android9; (O)
    */

   int num2;
   int num3; 
   // integer num1, num2 and num3 are announced.
   num1 = 10;
   num2 = 20;
   num3 = 30;
   //Values are alloted to each parameter.

   printf("%d %d %d\n", num1, num2, num3);
   // 10 20 30 > print each values of parameter by using %d

    // <How to announce multiple parameters>

    int n1, n2, n3; // integers n1, n2, n3 are announced together
    n1=10, n2=5, n3=7;
    printf("%d %d %d \n",n1,n2,n3);#include <stdio.h>

int main(){
    //<Unit 4, 5>
    //How to write C codes

    printf("Hello,world! \n");
    printf("Hello, %s \n", "World!");

    /*
    1. semicolon (;) is required to run code. 

    2. If the function is continued ex) if, for
    then semicolon is not required
    ex) if(x>10){
        printf("a");
    }

    3. {} is used to show the range of function 
         ('if' funciton above prints 'a')
    4. Indent is used (space and tab) to read code easily
    
    */
    
    int num1; 
    
    /*
    integer 'num1' is defined. It is a parameter which is 'announced'

    * char, short, int, long > integers (different size)
    * float, double > Real numbers
    * void > no form
    
    <How to name parameter>
    1. Alphabets and numbers can be used
    2. Upper and lower cases are sorted
    3. CANNOT be started with number (should start with alphabet)
    4. Should not be keywords of C lang (int, short, long, float, void, if, for, while, switch, ...)
    ex) int if; (X)
    ex) double _Android9; (O)
    */

   int num2;
   int num3; 
   // integer num1, num2 and num3 are announced.
   num1 = 10;
   num2 = 20;
   num3 = 30;
   //Values are alloted to each parameter.

   printf("%d %d %d\n", num1, num2, num3);
   // 10 20 30 > print each values of parameter by using %d

    // <How to announce multiple parameters>

    int n1, n2, n3; // integers n1, n2, n3 are announced together
    n1=10, n2=5, n3=7;
    printf("%d %d %d \n",n1,n2,n3);

    // <How to allot the values together>
    int nu1=3, nu2=54, nu3=2; //integers nu1, nu2, nu3 are announced and their values are alloted.
    printf("%d %d %d \n", nu1, nu2, nu3);

    return 0;
}

    // <How to allot the values together>
    int nu1=3, nu2=54, nu3=2; //integers nu1, nu2, nu3 are announced and their values are alloted.
    printf("%d %d %d \n", nu1, nu2, nu3);

    return 0;
}
