#include<stdio.h>
int main()//主函数-程序的入口main 函数只能一个// int 是整型变量//char 是字符1//long 是长整型，short是短整型//float 是浮点型。
{
	long num=163;
	double weigh=108.8;
	int age = 18;
	char w='A';//字符用符号括起来
	printf("大家好啊！我叫\n");
	printf("年纪%d\n",age);//%d 是输出十进制的意思，%x打印16进制。
	printf("身高%d\n",num);//
	printf("体重%f\n",weigh);//浮点型，打印小数
	printf("爱好就是 \n");//打印字符型
	return 0;//返回0（整型）
}
