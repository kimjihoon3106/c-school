#include <stdio.h>

// 9-1
/*
int main() {
    int a[5] = {10,20,30,40,50};
    int result = 0, i = 0;
    for(i = 0; i < 5;i++){
        result = result + a[i];
    }
    printf("배열의 합 = %d",result);
}*/
/*
int main() {
    int a[5] = {10,20,30,40,50};
    int result = 0, i = 0;
    int* p = a;
    for(i = 0; i < 5;i++){
        result = p[i] + result;
    }
    printf("배열의 합 = %d",result);
}*/

// 9-2
/*
int StringPointer(char* s);
int main() {
    char string[100] = "";
    printf("문자열 입력: ");
    gets(string);
    printf("문자열 길이: %d \n",StringPointer(string));
}

int StringPointer(char* s){
    int len = 0;
    while(*s != '\0') {
        len++;
        s++;
    }
    return len;
}*/
// 9-3
/*
void Stringcopy(char* pa, char* pb);
int main()
{
    char a[20] = "I LOVE YOU";
    char b[20] = "";
    Stringcopy(a,b);
    printf("a 배열 : %s\n",a);
    printf("b 배열 : %s\n",b);
}
void Stringcopy(char* pa, char* pb){
    while(*pa != '\0'){
        *pb = *pa;
        pb++;
        pa++;
    }
}*/

// 9-4
/*
int main() {
    char a[4][10] = {"you","house","home","school"};
    char temp[10];
    strcpy(temp,10,a[0]);
    int max = strlen(a[0]);
    for(int i = 1;i<4;i++){
        if(max < strlen(a[i])){
            max = a[i];
        }
    }
    printf("출력 : %s\n",temp);
}*/

