#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int ja, mo; //분'자' 분'모'
    
    printf("분자를 입력하세요:");
    scanf("%d", &ja);
    
    printf("분모를 입력하세요:");
    scanf("%d", &mo);
    
    printf("나누기의 결과는 %f\n", (float)ja/mo); // (float)을 쓰면 소숫점이 나옴 
    system("PAUSE");
    
  return 0;
}
