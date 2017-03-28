#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
    int var_i = 0,var_j = 0;
    int sum=0;
    int max ;
    while ( var_j < 4 )
    {
        sum = 0;
     for(int i = var_i ;i < var_i+3; i++ )
     {
       for(int j = var_j; j < var_j+3; j++ )
       {
           
           if((i==var_i+1 && j == var_j ) || (i == var_i+1 && j == var_j+2) )
              sum = sum +0;
           else
               sum = sum + arr[i][j];
           
           
       }  
         
     }
       
     if(var_i==0 && var_j==0)
         max = sum;
       else
     if (sum > max)
        max = sum; 
        
       
        var_i++;
       
        
     if (var_i > 3 )
       { 
        var_i = 0;
        var_j++;
       } 
      
    }
    
    printf("%d",max);
    
    return 0;
}
