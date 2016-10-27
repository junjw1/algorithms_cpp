#include <stdio.h>
#include <stdlib.h>
 
int compare (void *first, void *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}
 
int main(int argc, char** argv)
{
    int arr[] = {10,15,21,31,47,51,59,72,86,95};
    int arr_size = sizeof(arr) / sizeof(int);
    int key;
    int *find;
 
    key = 86;
    if ((find = bsearch(&key, arr, arr_size, sizeof(int), compare)) != NULL)
        printf("Find value: %d\n", *find);
    else
        printf("Can't Find\n");
    
    key = 10;
    if ((find = bsearch(&key, arr, arr_size, sizeof(int), compare)) != NULL)
        printf("Find value: %d\n", *find);
    else
        printf("Can't Find\n");
 
    return 0;
}