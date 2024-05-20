#include <stdio.h>

// fprintf()로 파일에 문자열 출력
/*
int main(void) {
    FILE *fp;
    errno_t err;

    err = fopen_s(&fp, "sample.txt","wt");

    if(NULL != fp) {
        printf("1. 새운 파일 생성 후 문자열 저장 완료\n");
        fprintf(fp,"Happy Day\n");
        printf("2. 윈도우 탐색기에서 sample.txt 파일 내용 확인\n");
        fclose(fp);
    }
    else
        printf("파일 열기 실패\n");

    return 0;
}*/

// fscanf_s()로 파일의 정수 데이터 가져오기
/*
int main(void){
    int n1, n2, n3;
    FILE = *fp;
    error_t err;

    err = fopen_s(&fp, "data.txt","rt");

    if(NULL != fp){
        printf("파일 열기 성공\n");

        fscanf_s(fp, "%d %d %d",&n1, &n2, &n3);
        printf("%d %d %d\n", n1, n2, n3);

        fclose(fp);
    }
    else
        printf("파일 열기 실패\n");

    return 0;
}*/

//fprintf()로 파일에 문자열 출력
/*
int main(void){
    FILE *fp;
    errno_t err;

    err = fopen_s(&fp, "sample.txt","wt");

    if(NULL != fp){
        printf("1. 새로운 파일 생성 후 문자열 저장 완료\n");
        fprintf(fp,"Happy Day\n");
        printf("2. 윈도우 탐색기에서 sample.txt 파일 내용 확인\n");
        fclose(fp);
    }

    else
        printf("파일 열기 실패\n");

    return 0;
}*/

// fscanf_s()로 파일의 정수 데이터 가져오기
/*
int main(void){
    int n1, n2, n3;
    FILE *fp;
    errno_t err;

    err = fopen_s(&fp,"data.txt","rt");

    if(NULL != fp){
        printf("파일 열기 성공\n");

        fscanf_s(fp, "%d %d %d",&n1,&n2,&n3);
        printf("%d %d %d\n", n1, n2 ,n3);

        fclose(fp);
    }
    else{
        printf("파일 열기 실패\n");
    }
    return 0;
}*/

// fscanf_s()로 파일의 모든 데이터 가져오기
/*
int main(void){
    int num = 0;
    FILE* fp;
    errno_t err;

    err = fopen_s(&fp, "data.txt","rt");

    if(err == 0 && fp != NULL)
    {
        printf("파일 열기 성공\n");

        while(fscanf_s(fp, "%d", &num)!=EOF){
            printf("%d\n",num);
        }
        fclose(fp);
    }
    else
        printf("파일 열기 실패\n");

    return 0;
}*/

// fscanf_s()로 파일의 문자열을 단어 단위로 가져오기
/*
int main(void){
    char good[80];
    FILE* fp;
    errno_t err;

    err = fopen_s(&fp, "insa.txt","rt");

    if(NULL != fp){
        printf("파일 열기 성공\n");

        while(EOF != fscanf_s(fp, "%s",good, sizeof(good)))
        {
            printf("%s\n",good);
        }
        fclose(fp);
    }
    else
        printf("파일 열기 실패\n");

    return 0;
}*/

// fgets()로 파일의 문자열을 줄 단위로 가져오기
/*
int main(void){
    char good[80]:
    FILE* fp;
    errno_t err;

    err = fopen_s(&fp, "insa.txt","rt");

    if(NULL != fp){
        printf("파일 열기 성공\n");

        while(NULL != fgets(good, sizeof(good), fp))
        {
            printf("%s",good);
        }
        fclose(fp);
    }
    else{
        printf("파일 열기 실패\n");
    }
    return 0;
}*/

// gets()로 입력한 문자열을 파일에 출력
/*
int main(void){
    char sts[50];
    int cnt;
    FILe *foc=NULL;
    errno_t err;

    err = fopen_s(&foc, "save.txt","w");

    if(err == 0){
        printf("save.txt 파일 생성 완료\n");
        printf("1. 문자열 입력: ");
        gets_s(sts, sizeof(sts));

        printf("2. 파일에 쓴 내용: %s\n",sts);

        for(cnt=0;sts[cnt]!=NULL;cnt++){
            fputc(sts[cnt],foc);
        }
        fclose(foc);
            printf("save.txt 파일닫기 성공\n");
    }
    else
        {
            printf("save.txt 파일 생성 실패\n");
        }
    return 0;
}*/