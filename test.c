
//#include <stdio.h>//��׼standard input output��
//int��ʾ���ͣ�mainǰ���int��ʾmain�������÷���һ������ֵ��
//int main()//������-�����������ҽ���һ����void main�����Ѿ���ʱ�ˣ�
//{	
	//�����������
	//printf("hello word\n");//printf=print function���⺯����C�����ṩ�ģ�
	//���˵Ķ���-���к�#include;///

///�������ͣ�
	//char-�ַ����ͣ�
	//char ch='A';//�ڴ�����ռ䣻
	//printf("%c\n",ch);//
	//%c-��ӡ�ַ���ʽ�����ݣ�
	//%f-��ӡ��������-��ӡС����
	//%d-��ӡ����ʮ�������ݣ�
	//%p-�Ե�ַ����ʽ��ӡ��
	//%x-��ӡ16�������֣�
	//20��
	//short int-������
	//int-���ͣ�
	//long-�����ͣ�
    //int age=20;
	//printf("%d\n",age);
	//long num=100;
	//printf("%d\n",num);
	//float f=5.0;
	//printf("%f\n",f);//
	//double d=3.14;
	//printf("%lf\n",d);
	//return 0;//����0
//}
//#include <stdio.h>
//int main()
//{
	//ʮ����0123456789���˽���01234567��������01��һ������λֻ�ܷ�0/1��
	//123ʮ�������֣�123=1*10^2+2*10^1+3*10^0;
	//010���������֣�0*2^2+1*2^1+0*2^0;
//printf("%d\n",sizeof(char));//1���ֽڣ�ͬһ�������޷��ŵ��ֽ���һ���ģ�
//printf("%d\n",sizeof(short));//2��bit-����λ��1byte-�ֽ�=8bit��kb��mb��gb��tb��pb��
//printf("%d\n",sizeof(int));//4
//printf("%d\n",sizeof(long));//4/8
	//C���Թ涨��ֻҪsizeof(long)>=sizeof(int)���ɣ�
//printf("%d\n",sizeof(long long));//8
//printf("%d\n",sizeof(float));//4
//printf("%d\n",sizeof(double));//8
//short int age = 20;//2^16-1=65535;
//short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20��
//CTRL+F7���з��־�����
//float weight = 95.6;//Ĭ��95.6��double���ͣ�����־��ȶ�ʧ��
//��95.6���f��ȷָ��float���ͣ������������ڴ�����4���ֽڴ��С����
//return 0;
//}

///������������
//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨�����ţ�֮��ı�����
//int main()
//{
//int num1 = 10;//�ֲ�����-�����ڴ���飨�����ţ��ڲ��ı�����
//return 0;
//}
//#include <stdio.h>
//int a = 100;
//int main()
//{
//	int a = 10;
//�ֲ�������ȫ���������鲻Ҫ��ͬ��
//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ��������ȣ�
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
//�����������ĺͣ�
	//int num1=0;
	//int num2=0;
	//int sum=0;
	//��������-ʹ�����뺯��scanf��
	//scanf("%d%d",&num1,&num2);//&ȡ��ַ����
	//int sum = 0;����
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�棻
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
		//return 0;
//}
//#include <stdio.h>
//int main()
//{  int num=0;//�ֲ�����������
//	{  
//     int num=0;
//	 printf("num=%d\n",num);//���Դ�ӡ����Ϊ��������ͬһ����������棻
//	}
//	printf("num=%d\n",num);//�����Դ�ӡ����Ϊ����ͬһ��������
//	return 0;
//}
//ȫ�ֱ���������
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
//	//δ�����ı�ʶ����
//	//extern�����ⲿ���ŵģ�
//    extern int g_val;//ȫ�ֱ��������������������̣�
//	//���Ե��������ļ�����ı�����
//	printf("g_val=%d\n",g_val);
//	return 0;
//}
//�������ڣ�
//�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ�����
//ȫ�������������ڣ�main��������������=����������������ڣ�
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
