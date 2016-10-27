#include <stdio.h>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& a){
    int size = a.size();
    int temp;

    while(size > 1){
        for(int i = 0; i<size-1; i++){
            if(a[i] > a[i+1]){
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        size--;
    }
    
}

int main(){
    
    int T, N, test;
    vector<int> a;
    freopen("input.txt","r",stdin);

    scanf("%d", &T);

    for(test = 0; test<T; test++){
        while(!a.empty()){
            a.pop_back();
        }

        scanf("%d", &N);

        while(N--){
            int val;
            scanf("%d",&val);
            a.push_back(val);    
        }
        for(int i=0; i<a.size(); i++)printf("%d ", a[i]);
        printf("\n");

        bubbleSort(a);

        for(int i=0; i<a.size(); i++)printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}