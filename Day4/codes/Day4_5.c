#include<stdio.h> 
int main()
{
    //short , long ( type modifier)

    //short int num; // signed 
    //signed short int num;  // OK 
    //printf("%d ",sizeof(num)); //2 bytes 
    
    //unsigned  short int num1; 
    //printf("%d ",sizeof(num1)); //2 bytes 
    
    //long int num3; // signed 
    //signed long  int num3; 
    //printf("%d ",sizeof(num3));// 4 bytes 
    
    //unsigned long int num4; 
    //printf("%d ",sizeof(num4));// 4 bytes 
    
    //short char ch; // NOT OK 
    //long char ch; // NOT OK 
    //short long int x;// NOT OK 
    
    //signed long long int x; // signed ( 8 bytes )
    //unsigned long long int y; //unsigned ( 8 bytes )
    
    short int x = 100; 
    printf("%hd",x); 
    return 0;
}
/*
            65 
    int num;   // 4 bytes 
    unsigned int num; // 4 bytes 
    short int num; // 2 bytes 
    unsigned short int num; // 2 bytes 
    long int num; // 4 / 8 
    unsigned long int num;  // 4 / 8 
    long long int num; // 8 bytes 
    unsigned long long int num;   // 8 bytes  

*/
