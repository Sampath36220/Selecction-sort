// selection sort
#include <stdio.h>
#include <stdlib.h>
void SelectionSort(int*, int);
int main(){
    int n, i;
    printf("Enter n value:\n");
    scanf("%d", &n);
    int* p;
    p = (int*)malloc(n * sizeof(int));
    printf("\nEnter elements into array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", (p + i));
    }
    printf("\nBefore sorting the array is :\n");
    for(i = 0; i < n; i++){
        printf("%d ", *(p + i));
    }
    SelectionSort(p, n);//SelectionSort function calling
    printf("\nAfter sorting the array is :\n");
    for(i = 0; i < n; i++){
        printf("%d ", *(p + i));
    }
    return 0;
}
void SelectionSort(int* p, int n){
    for(int i = 0; i < n - 1; i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(p[j]<p[min])
            {
                min=j;
            }
        }
        int t=p[i];
        p[i]=p[min];
        p[min]=t;
}
}