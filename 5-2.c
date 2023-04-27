#include <stdio.h>
int main()
{
    int x, y, result;

    printf("분자와 분모를 입력하시오: ");
    scanf("%d %d", &x,  &y);

    if(x==0){
        printf("0으로 나눌수 없습니다.");
    }
    else{
        result = x / y;
    printf("결과는 %d입니다.\n", result);
    }
    return 0;
}