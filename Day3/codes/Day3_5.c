#include<stdio.h> 

int main( )
{
    //sizeof()=> operator => bytes 
    int num = 10; 
    char ch = 'A'; 
    double dvar = 12.33;   // 8 bytes 
    float fvar = 10.33;  // 4 bytes 
    //sizeof( ) => integer => %d 
    printf("int size =  %d ",sizeof(num)); // 4 bytes 
    printf("char size = %d ",sizeof(ch)); // 1 bytes 
    printf("double size = %d ",sizeof(dvar));// 8 bytes 
    printf("float size = %d ",sizeof(fvar));// 4 bytes 
    return 0; 
}
/*
    Number system 
    Decimal number system 
    Binary number 
    octal number 
    hexadecimal 

    conversions 

    1s Compliment 
    2s Compliment 
    Binary addition 
    


*/