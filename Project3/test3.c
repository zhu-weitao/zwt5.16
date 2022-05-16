#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//int i = 0;
//	//scanf("%d", &i);
//	//if (i % 2 == 1)
//	//	printf("是奇数");
//	///*int i = 1;
//	//for (i = 1; i < 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d  ", i);
//	//}*/
//	return 0;
//
//} 
//#include <stdio.h>
//int main()
//{
//	int n;
//	int z = 1;
//	int i = 0;
//	for (i = 1; i < 6; i++)
//	{
//		z = i * z;
//	}
//	printf("%d ", z);
//	return 0;
//}
//
//#include <stdio.h>
//double  Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (Pow(n, -k)));
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf(" %d%d", &n, &k);
//	double  ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}
//
//#include <string.h>
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////void reverse_string(char arr[])
////{
////	char tmp = arr[0];
////	int len = my_strlen(arr);
////	arr[0] = arr[len - 1];
////	arr[len - 1] = '\0';
////	if (my_strlen(arr + 1) >= 2)
////		reverse_string(arr + 1);
////	arr[len - 1] = tmp;
////}
//reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefghjkl";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//
//}
//#include <stdio.h>
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//
//}
//#include <stdio.h>
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//} 
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//#include <stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}
//
//数组冒泡排序
#include <stdio.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,e2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}