#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    char c, d; //���� ���� ����  
    //���� ���� ���� �� d ��ſ� c+1 �־��  
    
    printf("enter a character: ");
    scanf("%c",&c); //scanf ���� ���� �Է�  
    
    d= c + 1; //���ں����� 1�� ���ϸ� ���ĺ� ���� ���ڷ� ���� 
    printf("The next character of %c (%i) is %c (%i).\n",c, c, d, d);
    system("PAUSE");
    
  return 0;
}
