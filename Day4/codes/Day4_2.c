#include<stdio.h> 
int main( )
{
    // unsigned => only positive 
    unsigned int num = 4294967295; // 4 bytes 
    /*
            unsigned 
            4 bytes => 32 bits 
            ( 2 to the power 32 ) - 1
            4294967296 - 1
            4294967295 => max range of unsigned int   
    
    
    */
   // unsigned int => %u 
    printf("%u ",num); 
    return 0; 
}