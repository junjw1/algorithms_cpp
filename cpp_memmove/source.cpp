#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char c[] = "0000123400000000";
    char j[] = "0000000012340000";

    char num[] = "54321";

    memmove(c+8, c+4, 4);//0000123412340000

    printf("%s\n", c);

    memmove(num+1, num, 2);

    printf("%s\n", num);
    return 0;
}