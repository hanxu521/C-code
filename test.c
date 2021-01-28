
//#include <stdio.h>//标准standard input output；
//int表示整型，main前面的int表示main函数调用返回一个整型值；
//int main()//主函数-程序的入口有且仅有一个；void main（）已经过时了；
//{	
	//这里完成任务；
	//printf("hello word\n");//printf=print function，库函数，C语言提供的；
	//别人的东西-打招呼#include;///

///数据类型；
	//char-字符类型；
	//char ch='A';//内存申请空间；
	//printf("%c\n",ch);//
	//%c-打印字符格式的数据；
	//%f-打印浮点数字-打印小数；
	//%d-打印整型十进制数据；
	//%p-以地址的形式打印；
	//%x-打印16进制数字；
	//20；
	//short int-短整型
	//int-整型；
	//long-长整型；
    //int age=20;
	//printf("%d\n",age);
	//long num=100;
	//printf("%d\n",num);
	//float f=5.0;
	//printf("%f\n",f);//
	//double d=3.14;
	//printf("%lf\n",d);
	//return 0;//返回0
//}
//#include <stdio.h>
//int main()
//{
	//十进制0123456789，八进制01234567，二进制01，一个比特位只能放0/1，
	//123十进制数字，123=1*10^2+2*10^1+3*10^0;
	//010二进制数字，0*2^2+1*2^1+0*2^0;
//printf("%d\n",sizeof(char));//1个字节，同一类型有无符号的字节是一样的；
//printf("%d\n",sizeof(short));//2，bit-比特位，1byte-字节=8bit，kb，mb，gb，tb，pb；
//printf("%d\n",sizeof(int));//4
//printf("%d\n",sizeof(long));//4/8
	//C语言规定，只要sizeof(long)>=sizeof(int)即可；
//printf("%d\n",sizeof(long long));//8
//printf("%d\n",sizeof(float));//4
//printf("%d\n",sizeof(double));//8
//short int age = 20;//2^16-1=65535;
//short age = 20;//向内存申请2个字节=16bit位，用来存放20；
//CTRL+F7运行发现警报；
//float weight = 95.6;//默认95.6是double类型，会出现精度丢失；
//在95.6后加f明确指出float类型，问题解决；向内存申请4个字节存放小数；
//return 0;
//}

///变量，常量；
//int num2 = 20;//全局变量-定义在代码块（大括号）之外的变量；
//int main()
//{
//int num1 = 10;//局部变量-定义在代码块（大括号）内部的变量；
//return 0;
//}
//#include <stdio.h>
//int a = 100;
//int main()
//{
//	int a = 10;
//局部变量和全部变量建议不要相同，
//当局部变量和全局变量名称相同时，局部变量优先；
	//printf("%d\n",a);
	//return 0;
//}
//#include <stdio.h>
//int a = 10;
//int main()
//{
//	{
//		
//	}
//	printf("%d\n",a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//计算两个数的和；
	//int num1=0;
	//int num2=0;
	//int sum=0;
	//输入数据-使用输入函数scanf；
	//scanf("%d%d",&num1,&num2);//&取地址符号
	//int sum = 0;报错
	//C语言语法规定，变量要定义在当前代码块的最前面；
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
		//return 0;
//}
//#include <stdio.h>
//int main()
//{  int num=0;//局部变量作用域；
//	{  
//     int num=0;
//	 printf("num=%d\n",num);//可以打印，因为作用域在同一个代码块里面；
//	}
//	printf("num=%d\n",num);//不可以打印，因为不在同一个作用域；
//	return 0;
//}
//全局变量作用域；
//#include <stdio.h>
//int global=2020;
//void test()
//{
//printf("test()--%d\n",global);
//}
//int main()
//{
//	test();
//	printf("%d\n",global);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//未声明的标识符；
//	//extern声明外部符号的；
//    extern int g_val;//全局变量的作用域是整个工程；
//	//可以调用其他文件里面的变量；
//	printf("g_val=%d\n",g_val);
//	return 0;
//}
//生命周期；
//局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束；
//全部变量生命周期：main函数的生命周期=整个程序的生命周期；
//#include <stdio.h>
//int main()
//{
//	{
//		int a=10;
//	printf("%d\n",a);//ok
//	}
//	printf("%d\n",a);//error
//    return 0;
//}
