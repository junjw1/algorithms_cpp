#include <stdio.h>
#define SIZE 8

int main(){

    int num[SIZE] = {-7, 4, -3, 6, 3, -8, 3, 4};
    // int num[SIZE] = {1,1,1,1,1,1,1,1};
    int i, k, max, sum, maxIndex, maxRange;
    int s;

    s = SIZE; //입력 배열 크기
    max = 0;
    maxIndex = -1;
    maxRange = -1;
    k = 0;
    sum = 0;

    //O(N)
    while(s>1){
        printf("<--s is %d-->\n",s);
        while(1){
            // printf("k is %d\n",k);
            for(i = k ; i < (k+s) ; i ++){
                sum += num[i];
            }
            printf("sum is %d\n",sum);

            //max 선정
            if(max < sum){
                max = sum;
                maxIndex = k;
                maxRange = s;
            }
            sum = 0;  
            if(i == SIZE){
                k = 0;
                break;
            }
            // sum = 0 ; //브레이크로 빠져나가면 이 코드가 안 먹힌다!!             
            k++;
        }
        s--;        
    }
    
    printf("answer is %d\n",max);
    printf("num[%d] ~ num[%d]\n", maxIndex, (maxIndex + maxRange - 1));

    return 0;

}