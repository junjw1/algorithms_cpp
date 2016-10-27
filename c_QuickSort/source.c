#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b){
    return *(int *)a- *(int *)b; //오름차순
    // return *(int *)b-*(int *)a; //내림차순

}
int main(){

    int n, i;
    int *str, *aft;

    scanf("%d",&n);

    srand(time(0));
    str = (int *)malloc(sizeof(int)*n);
        
    for(i=0; i<n; i++){
        str[i]=96+rand()%26+1;
    }

    for(i=0;i<n;i++){
        printf("%c\n",*(str +i));
    }

    //정렬하기
    qsort(str, n, sizeof(int), compare);    

    //정렬된 배열 출력
    printf("------\n");
    for(i=0;i<n;i++){
        printf("%c\n",str[i]);
    }

    free(str);
    
    return 0;
}
