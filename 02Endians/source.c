#include <stdio.h>
int main(){

    // int n;
    // unsigned int x = 0x12345678;
    // unsigned int a,b,c,d;

    // a = x & 0xff000000;
    // b = x & 0x00ff0000;
    // c = x & 0x0000ff00;
    // d = x & 0x000000ff;

    // a = a >> 24;
    // b = b >> 8;
    // c = c << 8;
    // d = d << 24;

    // printf("%d == %x\n", x, x);
    // printf("%d == %x\n", a+b+c+d, a+b+c+d);

    int test;
    unsigned int x, a,b,c,d;
    
    scanf("%d",&test);

    while(test--){
        scanf("%d",&x);

        a = x & 0xff000000;
        b = x & 0x00ff0000;
        c = x & 0x0000ff00;
        d = x & 0x000000ff;

        a = a >> 24;
        b = b >> 8;
        c = c << 8;
        d = d << 24;

        printf("%u(10) 0x%x\n", a+b+c+d, a+b+c+d);
        
    }


    return 0;
}

