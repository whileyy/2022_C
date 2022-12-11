#include <stdio.h>
// #include -预处理器指令
// Code1

//int main(void) { // main()总是第一个被调用的函数
	// int main 组成函数的语句
	// function a() function b() 语句
	/*
	c程序中包括6种语句
	1- 标号语句
	2- 复合语句
	3- 表达式语句
	4- 选择语句
	5- 迭代语句
	6- 跳转语句
	语句由C语言中的关键字 标识符 运算符 数据组成
	*/
	//int num;
	//num = 87;
	//printf("i am a simple ");
	//printf("computer.\n");
	//printf("My favorite number is %d because it is first.\n", num);
	//return 0;
//}


/*---------------------------------------------------------------*/


/*
 解析上方代码中的作用

 #include<stdio.h> <-- 包含另一个文件
  #include<stdio.h> 这段代码就是告诉编译器把stdio.h中的内容包含在当前程序中
  stdio.h 是c编译器软件包的标准部分 stdio.h 提供键盘输入和屏幕输出的支持

  int main(void) <-- 函数名
  c程序中包含一个或多个函数,他们是C程序的基本模块
  Code1中的程序中有一个名为main()的函数,圆括号表名main()是一个函数名
  int表名main函数返回一个整数
  void表名main()不带任何参数
  
  { <-- 函数体开始
  左花括号表示函数定义开始,右花括号(})代表函数定义结束

  int num; <-- 声明
  该声明表名将使用一个名为num的变量,并且num是int(整数)类型

  num = 1; <-- 赋值表达式语句
  语句num = 1;把值1赋给名为num的变量

  printf("i am a simple"); <-- 调用一个函数
  该语句使用printf()函数,在屏幕上显示i am a simple 光标停在同一行
  printf()是标准的c库函数,在程序中使用叫作调用函数

  printf("computer.\n"); <-- 调用另一个函数
  接下来调用的这个printf()函数在上条语句打印出来的内容后加上 "computer"
  代码\n告诉计算机另起一行,即把光标移至下一行

 printf("My favorite number is %d because it is first.\n", num);
 最后调用的printf()把num的值(87)内嵌在用双引号括起来的内容中一并打印
 %d告诉计算机以何种形式输出num的值,打印在何处

 return 0; <-- return语句
 C函数可以给调用方提供(或返回)一个数
 目前可暂时把该行看做结束main()函数的要求

 } <-- 结束

*/