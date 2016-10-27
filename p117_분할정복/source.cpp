#include <stdio.h>
#include <vector>
#include <limits>
using namespace std;

int goodMaxSum(vector<int>& a, int low, int high){
    
    if(low == high) return a[low];

    int MIN = numeric_limits<int>::min();

    int mid = (low+high)/2;
    int leftMax = MIN;
    int rightMax = MIN;
    int sum = 0;

    for(int i = mid ; i >= low ; i--){
        sum += a[i];
        leftMax = max(leftMax, sum);
    }   
    
    sum = 0;
    for(int i = mid+1; i <= high ; i++){
        sum += a[i];
        rightMax = max(rightMax, sum);
    }

    int space = max(goodMaxSum(a, low, mid), goodMaxSum(a, mid+1, high));

    return max(leftMax + rightMax, space);

}

int main(){
    int T, test, N, value;
    vector<int> a;

    freopen("input.txt", "r", stdin);

    scanf("%d", &T);
    for(test=0; test<T; test++){
        
        scanf("%d", &N);        
        while(a.size() != 0){
            a.pop_back();
        }

        while(N--){
            scanf("%d", &value);
            a.push_back(value);
        }
        printf("%d\n", goodMaxSum(a, 0, a.size()-1));

    }    

    return 0;
}