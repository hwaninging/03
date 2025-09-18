#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    char c, d; //문자 변수 선언  
    //변수 구분 해준 것 d 대신에 c+1 넣어도됨  
    
    printf("enter a character: ");
    scanf("%c",&c); //scanf 통한 문자 입력  
    
    d= c + 1; //문자변수에 1을 더하면 알파벳 다음 문자로 가능 
    printf("The next character of %c (%i) is %c (%i).\n",c, c, d, d);
    system("PAUSE");
    
  return 0;
}
