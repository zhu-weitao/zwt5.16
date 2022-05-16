#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* dest, void* src,size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if (src >dest)
//	{
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	           /*   4 5 6 7   */
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr+3, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
////#include <stdio.h>
////int main()
////{
////	int arr1[] = { 1,2,3,4,5 };
////	int arr2[] = { 1,2,3,5,6 };
////	int ret = memcmp(arr1, arr2, 16);
////	printf("%d", ret);
////	return 0;
////
////}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char arr[] = "I AM ASTUDENT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s ",arr);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	FILE* pf = fopen("text.text", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "zwt@qq.com";
//	char* p = "@.";
//	char buff[1024] = { 0 };
//	strcpy(buff, arr);
//	char* ret =  NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//char*my_strstr(const char* p1, const char* p2)
//{
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//
//}
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "cde";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);
//		return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int my_strcmp(char* str1, char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	/*return(*str1 - *str2);*/
//	/*if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}*/
//int main()
//
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcw";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//char*my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxx";
//	char arr2[] = "bit";
//	/*char* strcat(char* strDestination, const char* strSource);*/
//	my_strcat(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//char* my_strcpy(char* dest, char* src)
//{
//	char *ret= dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "bite";
//	my_strcpy(arr1, arr2);
//	printf("% s\n", arr1);
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//
//}
//#include <stdio.h>
//int find_num(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if(arr[x][y] > k)
//		{
//		    y--;
//         }
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else 
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是 ：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//
//}


#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	int len = strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	/*strncat(str1, str1, 6);
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}*/

	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1,1);
		int ret=strcmp(s1,s2);
			if (ret == 0)
			{
				return 1;
			}
	}
	return 0;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;

}

