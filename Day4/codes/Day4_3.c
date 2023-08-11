#include<stdio.h> 

int main( )
{
    /*
            A-Z => 65-90
            a-z => 97-122   
    */
    char ch = 'A'; // 65=> 65 ka binary 
    //char ch = 65;// OK   
    //char are internally integral constants (ASCII)
    //printf("%c",ch); //A  
    //printf("%d",ch); //65   
    //printf("%d",'A' - 65);// 0 
    //          65 - 65 => 0   
    return 0; 
}