#include <stdio.h>
// һ���ļ��а�����������
void butler(void); /* ANSI/ISO C����ԭ�� */
int main1(void) { // ����main�����ڳ����ļ���ʲôλ�� ����C���򶼴�main������ʼִ��
	printf("welcome. \n");
		butler();
		printf("hello");
	return 0;
}
void butler(void) { /* �������忪ʼ */
	printf("C\n");
}