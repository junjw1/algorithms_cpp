#include <stdio.h>
int main(){

    int T,i;
    int x[4] = {0};
    int y[4] = {0};
    int a, b;
    scanf("%d",&T);

    while(T--){
        a=0;
        b=0;

        for(i=0;i<3;i++){
            scanf("%d %d", &x[i], &y[i]);
        }

        if(x[0]==x[1]) a = x[2];
        else if(x[0]==x[2]) a = x[1];
        else a = x[0];

        if(y[0]==y[1]) b = y[2];
        else if(y[0]==y[2]) b = y[1];
        else b = y[0];

        printf("%d %d\n", a,b);          

    }

    return 0;
}