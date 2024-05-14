#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 실습 1
/*
struct std
{
    int sno;
    char name[10];
    float avg;
};

int main(void){
    struct std s;
    printf("구조에 멤버 초기화 선언 \n");
    s.sno = 20201233;
    strcpy(s.name, "홍길동");
    s.avg = 88.33;

    printf("구조체 멤버 출력\n");
    printf("학번 : %d\n",s.sno);
    printf("성명 : %s\n",s.name);
    printf("점수 : %.2f\n",s.avg);

    return 0;
}*/

// 실습 2
/*
struct point
{
    int x;
    int y;
};

int main(void){
    struct point p1 = {10,20};
    struct point p2 = {30,40};

    p2 = p1;

    // 컴파일 오류
    /*if(p1 == p2){
        printf("p1와 p2이 같습니다.");
    }*/
/*
    // 올바른 비교
    if((p1.x == p2.x) && (p1.y == p2.y)){
        printf("p1와 p2이 같습니다.");
    }
}*/

// 실습 3
/*
struct person
{
    char name[10];
    char gender;
    int age;
};

int main(void){
    struct person mc[3] = {
        {"홍길동",'M', 23},
        {"김가을",'W', 20},
        {"이겨례",'M', 25}
    };
    int cnt;
    printf("%6s \t %6s %8s %6s\n","순서","성명","성별","나이");

    for(cnt = 0; cnt<3;cnt++){
        printf("%4d\t", cnt + 1);
        printf("%8s %6c %6d\n",mc[cnt].name,mc[cnt].gender,mc[cnt].age);
    }
    return 0;
}
*/

// 실습 4
/*
#define SIZE 3

struct student
{
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct student list[SIZE];

    int i;
    for(i = 0;i<SIZE;i++){
        printf("학번을 입력하시오: ");
        scanf("%d",&list[i].number);
        printf("이름을 입력하이소: ");
        scanf("%s",list[i].name);
        printf("학점을 입력하시오(실수): ");
        scanf("%lf",&list[i].grade);
    }

    for(i = 0 ;i<SIZE;i++){
        printf("학번: %d, 이름: %s, 학번: %f\n",list[i].number,list[i].name,list[i].grade);
    }
    return 0;
}*/

// 실습 5
/*
struct student
{
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct student s = {1,"홍길동",4.3};
    struct student* p;
    

    p = &s;

    printf("학번=%d 이름=%s 학점=%f \n",s.number,s.name,s.grade);
    printf("학번=%d 이름=%s 학점=%f \n",(*p).number,(*p).name,(*p).grade);
    printf("학번=%d 이름=%s 학점=%f \n",p->number,p->name,p->grade);
    // *p = s와 동일, (*p).number 는 s.number와 동일하다.
    // -> 간접 멤버 연산자로 구조체 포인터에서 바로 구조체 멤버로 접근할 수 있다.
    return 0;
}*/

