#include <stdio.h>
#include <vector> //vector
#include <algorithm> //sort
#include <stdlib.h> //qsort

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b ); //오름차순
//   return ( *(int*)b - *(int*)a ); //내림차순
}

bool myfunc(int i, int j){
    return i<j; //오름차순
    // return i>j; //내림차순
}

int main(){

    int T;
    int N;    
    vector<int> a;    
    vector<int>::iterator iter;

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

        //이게 바로 STL 스타일~~
        for(iter = a.begin(); iter != a.end(); iter++) printf("%d ", *iter);
        printf("\n");

        // 첫번째 인자에는 iterator 대신 실제 포인터를! 
        // qsort(&a[0], a.size(), sizeof(a[0]), compare); //cstdlib

        sort(a.begin(), a.end(), myfunc); //algorithm, myfunc 안넣으면 디폴트 오름차순

        //올드하다~~
        for(int i=0; i<a.size(); i++) printf("%d ", a[i]);
        printf("\n");

    }

    return 0;
}