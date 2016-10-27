#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> a ;
    int ans = 0;
    a.assign(6,11);
    a.push_back(12);
    a.push_back(18);
    a.push_back(3);
    a.push_back(25);
    a.push_back(3);

    for(int i= 0; i<a.size(); i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    sort(a.begin(), a.end());

    for(int i= 0; i<a.size(); i++){
        printf("%d ", *(a.begin() + i));
    }
    printf("\n");

    vector<int>::iterator t;
    t = (a.end() - a.begin())/2 + a.begin();
    a.insert(t, 99);

    for(int i= 0; i<a.size(); i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(int i = 0; i<a.size(); i++){
       ans = max(a[i], ans);
    }
    
    printf("first = %d\n", a.front());
    printf("first iterator = %d\n", a.begin());
    printf("size = %d\n", a.size());
    printf("capacity = %d\n", a.capacity());

    printf("%d\n", ans);
    return 0;
}