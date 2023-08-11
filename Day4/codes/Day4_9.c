#include<stdio.h> 

int main( )
{
    char ch; 
    printf("Enter the char"); 
    scanf("%*c%c",&ch); 
    printf("%c",ch);
    printf("Hello world"); 
    printf("Hello world"); 
    printf("Hello world"); 
    printf("Hello world"); 
    return 0; 
}

// int main()
// {
//     int num1; 
//     float fvar; 
//     double dvar; 
//     printf("Enter int , float , double"); 
//     scanf("%d%f%lf",&num1,&fvar,&dvar);
//     printf("%d %.2f %.2lf",num1,fvar,dvar);  
//     return 0;
// }

// int main()
// {
//     int num1,num2; 
//     printf("Enter the 2 numbers ");
//     scanf("%d%d",&num1,&num2);
//     //avoid giving space in scanf    
//     printf("%d %d",num1,num2); 
//     return 0;
// }

// int main( )
// {
//     int num1,num2;
//     printf("Enter the num1"); 
//     scanf("%d",&num1); 
    
//     printf("Enter the num2"); 
//     scanf("%d",&num2); 

//     printf("%d %d",num1,num2); 
    
//     return 0; 
// }
// int main( )
// {
//     int num;
//     printf("Enter the integer value"); 
//     scanf("%d",&num); // & => address of operator  
    
//     printf("number = %d",num); 
    
//     return 0; 
// }