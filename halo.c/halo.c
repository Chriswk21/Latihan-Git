#include<stdio.h>

int tambah(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", tambah(a,b));
}