#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int ja, mo; //��'��' ��'��'
    
    printf("���ڸ� �Է��ϼ���:");
    scanf("%d", &ja);
    
    printf("�и� �Է��ϼ���:");
    scanf("%d", &mo);
    
    printf("�������� ����� %f\n", (float)ja/mo); // (float)�� ���� �Ҽ����� ���� 
    system("PAUSE");
    
  return 0;
}
