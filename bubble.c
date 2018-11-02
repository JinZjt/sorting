#include<stdio.h>
#include<stdlib.h>
#define N 10000

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int* a, int n, int* record){
    int sortflag=0,i=0;
    while(sortflag==0){
        sortflag = 1;
        for(i=0;i<n-1;i++){
            record[1]++;
            if(a[i]>a[i+1]) {
                record[0]++;
                swap(&a[i], &a[i+1]);
                sortflag = 0;
                }
        }
    }
}

void print(int* a, int n, int* rec){
    int i=0,flag=0;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]) flag++;
    }
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    if(flag==0) printf("Sorted: Y\n");
    printf("swaps = %d\ncomparisons = %d\n", rec[0], rec[1]);
    printf("\n");
}

int main(){
    int sortflag=0, i=0,n=0,num=0,flag=0;
    int a[N];
    int b[10]={4,3,5,1,0,2,9,8,6,7};
    int c[10]={4,3,3,1,1,2,9,8,6,6};
    int d[10]={0,1,2,3,4,5,6,7,8,9};
    int e[10]={9,8,7,6,5,4,3,2,1,0};
    int f[10]={3,3,3,3,3,3,3,3,3,3};
    int record[2]={0,0};
    while(i<N){
        n = rand()%100000;
        for(i=0;i<num;i++)
            if(a[i]==n) continue;
        a[num++]=n;
    }
    bubble(a,N,record);
    for(i=0;i<100;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("swaps = %d\ncomparisons = %d\n", record[0], record[1]);
    bubble(b,10,record);
    printf("Type: Unique random values\n");
    print(b,10,record);
    record[0]=0;
    record[1]=0;

    bubble(c,10,record);
    printf("Type: Random values\n");
    print(c,10,record);
    record[0]=0;
    record[1]=0;

    bubble(d,10,record);
    printf("Type: Ascending sorted list\n");
    print(d,10,record);
    record[0]=0;
    record[1]=0;

    bubble(e,10,record);
    printf("Type: Descending sorted list\n");
    print(e,10,record);
    record[0]=0;
    record[1]=0;

    bubble(f,10,record);
    printf("Type: Uniform list\n");
    print(f,10,record);
    record[0]=0;
    record[1]=0;

    return 0;
}