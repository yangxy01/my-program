#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


////�ҽط����(k)
//double root(double x1, double x2);
//double xpoint(double x1, double x2);
//double f(double x);
//int main()
//{
//	double x1, x2, x, f1, f2;
//	scanf("%lf %lf", &x1, &x2);
//	f1 = f(x1);
//	f2 = f(x2);
//	while (f1*f2 >= 0)
//	{
//		printf("reinput\n");
//		scanf("%lf %lf", &x1, &x2);
//	}
//	x = root(x1, x2);
//	printf("%lf", x);
//	return 0;
//}
//
//double root(double x1, double x2)
//{
//	double y1, y2, y, xc;
//	y1 = f(x1);
//	y2 = f(x2);
//	do{
//		xc = xpoint(x1, x2);
//		y = f(xc);
//		if (y*y1 > 0)
//		{
//			x1 = xc;
//			y1 = y;
//		}
//		if (y*y2 > 0)
//		{
//			x2 = xc;
//			y2 = y;
//		}
//	} while (fabs(y) >= 0.0001);
//	return xc;
//}
//
//double xpoint(double x1, double x2)
//{
//	double xc = 0;
//	xc = (x1*f(x2) - x2*f(x1)) / (f(x2) - f(x1));
//	return xc;
//}
//
//double f(double x)
//{
//	double y = 0;
//	y = x*x*x - 5 * x*x + 16 * x - 80;
//	return y;
//}

//�����Һ����Ľ���ֵ��H)
double funcos(double e, double x);
int main()
{
	double e, x;
	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
	return 0;
}

double funcos(double e, double x)
{
	int i, j, flag = 1, total = 1, sum = 0, cosx;
	for (i = 0; (pow(x, i) / total) > e; i = i + 2)
	{
		total = 1;
		for (j = i; j >= 1; j--)
		{
			total = total*j;
		}
		cosx = (pow(x, i) / total)*flag;
		flag = -flag;
		sum = sum + cosx;
	}
	return sum;
}




////�����Һ����Ľ���ֵ��H)
//double funcos(double e, double x);
//int main()
//{
//	double e, x;
//	scanf("%lf %lf", &e, &x);
//	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//	return 0;
//}
//
//double funcos(double e, double x)
//{
//	double i=0, j, flag = 1, total = 1, sum = 0, cosx;
//	
//	while((pow(x, i) / total) > e)//����һ�����ֵ����1������
//	{
//		
//		//�ȱ������һ���cosx,�������������һ�����
//		cosx = (pow(x, i) / total)*flag;
//		sum = sum + cosx;
//
//		i = i + 2;//�����ɵĻ�i��Ҫ��2�ˣ���ΪΪ��һ����׼��
//		total = 1;
//		for (j = i; j >= 1; j--)//��һ��Ľ׳�
//		{
//			total = total*j;
//		}
//		
//		flag = -flag;
//		
//	}
//	//�ǵü��Ͼ���ֵ�պ�С��1����һ��
//	cosx = (pow(x, i) / total)*flag;
//	sum = sum + cosx;
//
//	return sum;
//}