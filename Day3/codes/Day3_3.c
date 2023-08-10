#include<stdio.h> 
int main()
{
    int x;  // variable declaration 
    int num = 10; //variable decln + init 
    printf("num = %d",num); //10 
    num = 20; //Assignment 
    printf("num = %d",num); //20 
    num = 30; //Assignment 
    num = 40; //Assignment 
    num = -111; //Assignment 
    printf("num = %d",num); //-111 
    return 0;
}
//assignment can be done multiple number of times => Yes 
/*
        int x = 10; 
        x = 20; //OK 
        x = 30; //OK 

*/

/*
        Initialization can be done only once 
        int x = 10; 
        int x = 10; // NOT OK 

*/