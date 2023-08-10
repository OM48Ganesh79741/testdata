#include<stdio.h> 
int main()
{
    //Simple C data types are: int, double, char.
    int num = 10; // variable declaration + initialization 
    char ch ='A';// variable declaration + initialization 
    double dvar = 12.33;// variable declaration + initialization 

    //format specifier 
    // int => %d 
    // char => %c 
    // double => %lf
    //printf("%d\n",num);
    //printf("%c\n",ch);   
    //printf("%.2lf",dvar);

    printf("num = %d char = %c double = %.2lf",num,ch,dvar);
    //      num = 10 char = A  double = 12.33  
     
    return 0;
}
//compilation always start from first line 
//execution always starts from main( )