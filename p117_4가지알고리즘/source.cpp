#include <stdio.h>
#include <vector>
#include <limits>
using namespace std;

int inefficientMaxSum(const vector<int>& arr){
    int size = arr.size();
    int ret = numeric_limits<int>::min();
    for(int i = 0; i<size; i++){
        for(int j = i; j<size; j++){
            int sum = 0;
            for(int k = i; k<=j ; k++){
                sum += arr[k];
            }
            ret = max(ret, sum);
        }
    }
    return ret;
}
int inefficientMaxSum2(const vector<int>& arr, int *x, int *y){
    int size = arr.size();
    int ret = numeric_limits<int>::min();
    int temp;
    for(int i = 0; i<size; i++){
        for(int j = i; j<size; j++){
            int sum = 0;
            for(int k = i; k<=j ; k++){
                sum += arr[k];
            }
            temp = ret;
            ret = max(ret, sum);
            if(ret != temp){
                *x = i;
                *y = j;
            }            
        }
    }
    return ret;
}
int betterMaxSum(const vector<int> arr){
    int size = arr.size();
    int ret = numeric_limits<int>::min();
    for(int i=0; i<size; i++){
        int sum = 0;
        for(int j=i; j<size; j++){
            sum += arr[j];
            ret = max(ret, sum);
        }
    }
    return ret;
}
int fastMaxSum(const vector<int>& arr, int lo, int hi){
    
    if(lo == hi) return arr[lo];

    int mid = (lo + hi)/2;
    int left = numeric_limits<int>::min();
    int right = numeric_limits<int>::min();
    int sum = 0;
    
    for(int i = mid; i>=lo; i--){
        sum += arr[i];
        left = max(left, sum);
    }
    
    sum =0;
    for(int j = mid+1; j<=hi; j++){
        sum += arr[j];
        right = max(right, sum);
    }

    int single = max(fastMaxSum(arr, lo, mid), fastMaxSum(arr, mid+1, hi));
    
    return max(left+right, single);
}
int fastestMaxSum(const vector<int>& arr){
    int size = arr.size();
    int ret = numeric_limits<int>::min();
    int psum = 0;
    for(int i = 0; i<size; i++){
        psum = max(psum, 0) + arr[i];
        ret = max(psum, ret);
    }
    return ret;
}
int main(){
    
    // const int MIN = numeric_limits<int>::min();

    int T, num, value;
    int x = -1, y = -1;
    
    
    vector<int> arr;
    
    freopen("input.txt","r",stdin);

    scanf("%d %d",&T, &num);

    //입력받기
    for(int test = 0; test < T; test++){
       while(num--){
           scanf("%d",&value);
           arr.push_back(value);
       }
    }
    int a = inefficientMaxSum2(arr, &x, &y);
    printf("%d [%d,%d]\n", a, x, y);

    printf("%d\n", betterMaxSum(arr));

    printf("%d\n", fastMaxSum(arr, 0, arr.size()-1));
    
    printf("%d\n", fastestMaxSum(arr));
    

    // for(int i = 0; i<arr.size(); i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    

    return 0;
}