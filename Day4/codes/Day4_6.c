#include<stdio.h> 

int main( )
{
    // \"" => ""
    //printf("\"Hello world\""); 
    
    // \' => ' ' 
    //printf("\'Hello world\'"); 
    
    // \b => backspace 
    //printf("Sunbeam pune,\b"); 
    //      Sunbeam pune,
    
    //printf("Sunbeam pune,\b.");
    //      Sunbeam pune. 

    //printf("Hello wo\brld");
    //      Hello wrld

    // \n=> new line 
    //printf("hello\nworld\nworld"); 
    
    // \r => carraige return 

    //printf("eello world\rH"); 
    //      Hello world

    // \t => tab spaces (  8 spaces )
    //printf("12345678\n"); 
    //printf("\tHello world"); 
    
    //printf("\\n is used for new line"); 
    
    
    // \n , \r , \t => char constant => integral constants ( ASCII)

    //printf("%d",'\n'); // \n => ascii value (10)
    //printf("%d",'\r'); // \r => ascii value (13)

    printf("%d",'\r' - '\n');  // 13 - 10 => 3 
    
    return 0; 
}