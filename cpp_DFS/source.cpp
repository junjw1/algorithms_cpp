#include <stdio.h>
#include <vector>
using namespace std;

bool isPossible(vector<int>& a, int i, int sum, int n, int k){
    printf("i=%d sum=%d\n", i,sum);
    if(i == n) return sum == k;
    if(isPossible(a, i+1, sum, n, k)) return true;
    if(isPossible(a, i+1, sum+a[i], n, k)) return true;
    return false;
}

int main(){
    int T, N, K;
    vector<int> a;
    freopen("input.txt", "r", stdin);

    scanf("%d", &T);
    // printf("T=%d\n", T);
    for(int test = 0; test<T; test++){
        scanf("%d %d", &N, &K);
        // printf("N=%d K=%d\n", N, K);
        int num = N;
        while(!a.empty()){
            a.pop_back();
        }
        while(num--){
            int val;
            scanf("%d", &val);
            a.push_back(val);
        }
        // printf("a size =%d\n", a.size());
        if(isPossible(a, 0, 0, N, K)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}