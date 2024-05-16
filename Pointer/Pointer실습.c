// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

// 실습 1
/*
void printReverse(int*, int size) {
    int* p = A + size -1;
    printf("역순 A[] = ");
    for(int i = size; i > 0; i--){
        printf("%d ",*(p--));
    }
}

int main(void) {
    int A[] = {0,1,2,3,4,5,6,7,8,9};
    int* p = A;
    int length = sizeof(A) / sizeof(A[0]);
    
    printf("원본 A[] = ");
    for(int i = 0;i < length; i++){
        printf("%d",*(p+i));
    }
    printf("\n");
    
    printReverse(A, length);
}/*

// 실습 2
/*
void serlen(char str[], int length) {
    for(int i = length; i>= 0; i--) {
        printf("%c",str[i]);
    }
}
int main(void) {
    char str[100];
    
    printF("문자열을 입력하시오 : ");
    gets(str);
    
    int length = strlen(str);
    
    serlen(str, length);
    
}*/

// 실습 3
/*
#define N_DATA 10

void array_printf(char* name, int* a, int size) {
    printf("%c[] = ",*name);
    for(int i = 0;i < size; i++){
        printf("%d",*(a+1));
    }
    printf("\n");
}
int array_add(int a[], int b[], int c[], int size) {
    for(int i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }
}

int main(void) {
    int A[N_DATA] = {15,25,35,45,55,65,75,85,95,105};
    int B[N_DATA] = {5,5,5,5,5,5,5,5,5,5};
    int C[N_DATA];
    
    int length = sizeof(A) / sizeof(A[10]);
    
    array_add(A,B,C,length);
    
    array_printf("A",A,length);
    array_printf("B",B,length);
    array_printf("C",C,length);
}*/