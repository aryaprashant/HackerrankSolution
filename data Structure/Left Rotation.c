#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n; 
    int d;
    scanf("%d",&n);
    scanf("%d",&d);
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    int *arrtemp = malloc(sizeof(int) * d);
    
    for(int i = 0; i < d; i++){
        
        arrtemp[i]=arr[i];
    }
    
    for(int i = d, j = 0;i < n; i++,j++){
        arr[j] = arr[i];
        
    }
    for(int i = n-d , j =0; i < n;i++,j++)
   {
        
        arr[i]=arrtemp[j];
    }
    for(int arr_i = 0; arr_i < n; arr_i++){
       printf("%d",arr[arr_i]);
       printf(" ") ;
    }
    
    return 0;
}
