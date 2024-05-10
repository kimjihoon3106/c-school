#include <stdio.h>
#include <string.h>

//1
/*
int main() {
    int a[]= {1,2,3,4};
    printf("*a = %d \n",*a);
    printf("*(a+1) = %u \n",*(a+1));
    printf("*(a+2) = %u \n",*(a+2));
    return 0;
}*/

//2
/*
int total = 0;
int sumpt(int* pt) {
    int a;
    for(a = 0; a<5; a++) {
        if(*(pt + a) % 2 == 0) total = total + *(pt + a);
        return total;
    }
}
int main(void){
    int numpt[] = {89,74,36,45,98};
    printf("%d",sumpt(numpt));
    return 0;
}*/

//3
/*
void robotMove(int pxp, int pyp, int mx, int my);
void robotMove(int *pxp, int *pyp, int mx, int my);
int main(void) {
    int x = 1;
    int y = 1;
    robotMove(x,y,1,2);
    printf("이동한 위치 (%d, %d)\n",x,y);
    robotMove(&x,&y,1,2);
    printf("이동한 우치 (%d, %d)\n",x,y);
    return 0;
}

void robotMove(int pxp, int pyp, int mx, int my){
    *pxp = *pyp + mx;
    *pxp = *pyp + my;
}
*/
//4
/*
void swap(int* a, int* b);
int main(void)
{
    int a,b;
    a=5;
    b=7;
    printf("함수 호출 전 : a = %d, b = %d \n",a,b);
    swap(&a,&b);
    printF("함수 호출 후 : a = %d, b = %d \n",a,b);
    return 0;
}
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/
//5
/*
int main() {
    char* lang[3] = {"C","JAVA","PYTHON"};
    int a;
    printf("여러분이 배워야 할 언어는");
    for(a = 0;a<3;a++){
        pritnf(" &s ",lang[a]);
        return 0;
    }
}
*/
//6
/*
int main(void) {
    char address[100];
    char* addpt;
    printf("주소 입력: ");
    gets(address);
    addpt = address;
    printf("입력한 주소는: ");
    puts(addpt);
    return 9;
}*/
//7
/*
int main(void){
    int i;
    int isUpper, isLower, isDigit;
    char mypassword[20];
    while(1) {
        printf("사용할 암호를 넣으세요 : ");
        isUpper = isLower = isDigit = 0;
        for(i = 0 ; i<strlen(mypassword); i++){
            if(mypassword[i] >= '0' && mypassword[i] <= '9')
                isDigit++;
            else if(mypassword[i] >= 'A' && mypassword[i] <= 'Z')
                isUpper++;
            else if (mypassword[i] >= 'a' && mypassword[i] <= 'z')
            isLower;
        }
        if((i>=6) && (isDigit <= 1) && (isUpper >= 1) && (isLower >= 1)){
            printf("암호로 사용 가능합니다. \n");
            break;
        }
        else
            printf("6문자 이상, 숫자, 대문자, 소문자가 각 1개 이상 있어야 합니다.\n");
    }
    return 0;
}*/
