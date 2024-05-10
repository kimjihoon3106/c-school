#include <stdio.h>

// swap() 함수 #1 (값에 의한 호출)
/*
void swap(int x, int y);
int main(void) {
    int a = 100, b = 200;
    printf("main 초기값: a= %d b= %d\n",a,b);

    swap(a,b);

    printf("main 변환값: a= %d b= %d\n",a,b);
    return 0;
}*/
/*
void swap(int x, int y){
    int tmp;
    printf("swap 이전값: x= %d y= %d\n",x,y);

    tmp = y;
    x = y;
    y= tmp;

    printf("swqp 이후값: x= %d y= %d\n",x,y);
}*/

// 8.3 실습 1
/*
int main() {
    char* p[4] = {"apple", "blueberry","orange","melon"};
    //p[0] = "pointer";
    for (int i = 0 ; i<4;i++){
        printf("%s",p[i]);
        printf("\n");
    }
}*/

// 8.3 실습 2
/*
int main(void) {
    int cnt, size, choice;
    char* task[] = {
        "Desk",
        "Computer",
        "Books",
        "USB",
        "EXIT"
    };

    printf("포인터 배열의 요소 선택(종료: 5)\n");

    size = sizeof(task) / sizeof(task[0]);
    // 배열 요소의 개수 산출

    for(cnt = 0; cnt < size; cnt++){
        printf("%d.%s \n",cnt+1,task[cnt]);
    }

    while(1){
        printf("\n숫자 입력(1~5): ");
        scanf("%d",&choice);
        if(choice < 1 || choice > 5){
            printf("입력 숫자 오류!\n");
            continue;
        }
        else if(choice == 5)
            break;
        else // 입력한 숫자에 해당하는 배열 요소 매핑
            printf("선택한 단어는 \"%s\"입니다.\n",task[choice]);
    }
}*/

// 8.3 실습 3
/*
int main(void) {
    int cnt, size;
    char* dept[] = {
        "행정학과",
        "법학과",
        "빅데이터사이언스학과"
    };
    printf("전공 학과 선택 \n");
    size = sizeof(dept) / sizeof(dept[0]); // 배열 요소의 개수 산출
    for(cnt = 0;cnt<size;cnt++){
        printf("%s\n",dept[cnt]);
    }
}*/