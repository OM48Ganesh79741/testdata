#include<stdio.h> 

int main( )
{
    //printf("%d",sizeof(10.33)); // double => 8 bytes  
    //printf("%d",sizeof(10.33f)); // float => 4 bytes 
    //printf("%d",sizeof(10.33F)); // float => 4 bytes 
    
    char ch; 
    printf("%d ",sizeof(ch)); // 1 byte 
    printf("%d ",sizeof('A')); // 4 byte  
    //'A' => char const => int 
    // sizeof(65) => 4 byte 
    return 0; 
}