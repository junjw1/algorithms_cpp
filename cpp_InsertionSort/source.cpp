#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;
void insertionSort(vector<int>& a){

    for(int i=1; i<a.size(); i++){

        if(a[i-1] <= a[i]) continue;

        int temp = a[i];

        for(int j=0; j<i; j++){
            if(a[j] > temp){
                memmove(&a[j+1], &a[j], sizeof(a[0])*(i-j));
                a[j] = temp;
                break;
            }             
        }        
    }
}

int main(){

    int T, test;
    int N;
    vector<int> a;

    freopen("input.txt", "r", stdin);

    scanf("%d", &T);

    for(test=0; test<T; test++){
        scanf("%d", &N);
        
        while(!a.empty()){
            a.pop_back();
        }

        while(N--){
            int val;
            scanf("%d", &val);
            a.push_back(val);
        }

        for(int i=0;i<a.size();i++)printf("%d ", a[i]);
        printf("\n");

        insertionSort(a);

        for(int i=0;i<a.size();i++)printf("%d ", a[i]);
        printf("\n");

    }

    return 0;
}