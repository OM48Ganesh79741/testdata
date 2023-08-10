#include<stdio.h> 
int main( )
{
    int num = 10; 
    //printf("          %d",num);
    // width specfier 
    //printf("%10d",num);// right justified 
    //                 1 0  
    // - - - - - - - - - - 
    //printf("%-10d",num);// left justified 
    // 1 0 
    // - - - - - - - - - - 

    //printf("%010d",num);// right justified 
    // 0 0 0 0 0 0 0 0 1 0  
    // - - - - - - - - - -  
    
    float fvar = 12.33; 
    //printf("%.2f",fvar); //12.33 

    //printf("%10.2f",fvar); //12.33 (right justified)
    //           1 2 . 3 3 
    // - - - - - - - - - - 
    
    //printf("%-10.2f",fvar); //12.33 (left justified)
    //  1 2 . 3 3 
    //  - - - - - - - - - - 

    //printf("%.f",fvar); //Round-off=>12
    return 0; 
}
