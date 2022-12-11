#include<stdio.h>
//int main1(void) (
	//错误1：  main 函数体使用 圆括号来代替花括号 这是错误的 这是C符号用错了地方
	//int n, int n2, int n3;
	// 错误2： 变量声明方式错误
	// 应该这样写： int n，n2，n3
	// 或者这样：
	// int n；
	// int n2；
	// int n3；
	/* 该程序中有多处错误
	// 错误3：注释莫问漏掉了 */ 
	//n = 5;
	//n2 = n * n;
	//n3 = n2 * n2;

	//printf("n = %d,n squared = %d, n cubed = %d\n", n, n2, n3)
		// 错误4: printf莫问漏掉了分号
	//	return 0;
//)

	/*
	语义错误
	在C语言中如果遵循了C规则，但是结果不准确，那就是犯了语义错误。上方代码中有这样的错误
	n3 = n2 * n2
	此处n3原意表示n的3次方，但是代码中的n3被设置成了n的4次方n2 = n * n
	*/


// 让我们来重新修复一下上方刚刚写过的代码
int main(void) {
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d,n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}