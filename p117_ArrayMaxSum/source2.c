#include <stdio.h>
#define SIZE 8

int main(){

    int arr[SIZE] = {-7, 4, -3, 6, 3, -8, 3, 4};
    int k, j, i;
    int sum, maxSum, maxIndex;
    sum = 0;
    maxSum = 0;
    maxIndex = 0;
    
    
    for(k=2 ; k<SIZE+1 ; k++){
        // printf("<--k = %d-->\n",k);
        for(j=0, i=0 ; i<SIZE ; j++){
            sum = 0;
            for(i=j ; i<(k+j) ; i++){
                sum += arr[i];
            }
            if(maxSum < sum){
                maxSum = sum;
                maxIndex = j;
            }
            // printf("sum = %d\n",sum);            
        }
    }

    printf("%d\n",maxSum);

    return 0;
}