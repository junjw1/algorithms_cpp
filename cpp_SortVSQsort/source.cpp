#include <stdio.h>
#include <vector> //vector
#include <algorithm> //sort
#include <stdlib.h> //qsort

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){

    int T;
    int N;    
    vector<int> a;    

    freopen("input.txt","r",stdin);

    scanf("%d", &T);

    for(int test=0; test<T; test++){
        scanf("%d", &N);
        while(!a.empty()){
            a.pop_back();
        }
        for(int i=0; i<N; i++){
            int value;
            scanf("%d", &value);
            a.push_back(value);
        }
        for(int i=0; i<a.size(); i++) printf("%d ", a[i]);
        printf("\n");

        // 첫번째 인자에는 iterator 대신 실제 포인터를! 
        // qsort(&a[0], a.size(), sizeof(a[0]), compare); //cstdlib

        sort(a.begin(), a.end()); //algorithm

        for(int i=0; i<a.size(); i++) printf("%d ", a[i]);
        printf("\n");

    }

    return 0;
}