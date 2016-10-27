#include <cstdio>
#include <queue>
using namespace std;

int main(){

    queue<int> qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);

    printf("%d\n", qu.front());
    printf("%d\n", qu.size());

    qu.pop();

    printf("%d\n", qu.front());
    printf("%d\n", qu.size());

    qu.pop();
    qu.pop();
    // qu.pop(); //한번 더하고 empty 출력하면 0이 나옴

    printf("%d\n", qu.empty()); //비었으면 1

    return 0;
}