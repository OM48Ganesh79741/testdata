#include<stdio.h>
int main(void)
{
    /*
        type modifier 
        signed 
        unsigned 
        short 
        long 
    */
    int num=2147483647;
    //signed int num=-10; 
    // by default it is considered as signed  
    /*
            int => 4 bytes ( 32 bits )
            ( 2 to the power 32 - 1 ) - 1 
            ( 2 to the power 31 ) - 1
            2147483647 => max value 
            -2147483648 => min value   
    
    */
    printf("%d",num); 
    return 0;
}