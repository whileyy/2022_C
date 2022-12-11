#include <stdio.h>
// 一个文件中包含两个函数
void butler(void); /* ANSI/ISO C函数原型 */
int main1(void) { // 无论main函数在程序文件的什么位置 所有C程序都从main函数开始执行
	printf("welcome. \n");
		butler();
		printf("hello");
	return 0;
}
void butler(void) { /* 函数定义开始 */
	printf("C\n");
}