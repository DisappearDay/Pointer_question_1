#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

int main() {
	//数组名是首元素地址
	////1 sizeof(数组名)  2 &数组名   --数组名表示整个数组的地址
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));  //sizeof(数组名)--计算的是数组的大小，单位字节--16
	//printf("%d\n", sizeof(a + 0));   //a表是首元素的地址  a+0还是首元素的地址，地址大小就是4/8
	//printf("%d\n", sizeof(&a));  //  &a取出的是数组的地址，数组的地址也是地址，地址就是4/8  类似整形的地址，字符的地址
	//printf("%d\n", sizeof(*a));   //4  a（数组名）表示首元素地址  *a就是首元素
	//printf("%d\n", sizeof(a+1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(*&a)); //16   &取的是数组的地址，数组的地址解引用访问的数组  因此sizeof计算的就是整个数组的大小
	//printf("%d\n", sizeof(&a + 1));  //  &a+1后仍然在计算一个地址的大小，所以sizeof是4个大小


//字符数组
	char c[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(c));   //  6
	//printf("%d\n", sizeof(c+0));   //  4/8
	//printf("%d\n", sizeof(*c));   //  1
	//printf("%d\n", sizeof(&c));   //  4/8
	//printf("%d\n", sizeof(c[1]));  //  1
	//printf("%d\n", sizeof(&c[1]+1));  //  1
	//printf("%d\n", sizeof(&c+1));    // 4/8



	//strlen(地址)  strlen 的参数是地址
	printf("%d\n", strlen(c));   //  随机数 ，strlen是以‘\0’结束
	printf("%d\n", strlen(c + 0));   // 随机数  和strlen(c)随机值一样
	//printf("%d\n", strlen(*c));   //  ‘a’--ASCL--97  所以strlen把97当作地址，进行非法访问--直接报错
	//printf("%d\n", strlen(c[1]));   // ‘b’--ASCL--98  所以strlen把98当作地址，进行非法访问--直接报错
	printf("%d\n", strlen(&c));  //  随机值
	printf("%d\n", strlen(&c + 1));  //  随机值 和strlen(&c)的随机值相差6
	printf("%d\n", strlen(&c[0] + 1));    // 随机值 和 strlen(c)的随机值相差1




	//char c[] = "abcdef";
	//printf("%d\n", sizeof(c));   //  7
	//printf("%d\n", sizeof(c+0));   //  4/8
	//printf("%d\n", sizeof(*c));   //  1
	//printf("%d\n", sizeof(&c));   //  4/8
	//printf("%d\n", sizeof(c[1]));  //  1
	//printf("%d\n", sizeof(&c[1]+1));  //  1
	//printf("%d\n", sizeof(&c+1));    // 4/8


	//printf("%d\n", strlen(c));   // 6
	//printf("%d\n", strlen(c + 0));   //  6
	////printf("%d\n", strlen(*c));   //  err
	////printf("%d\n", strlen(c[1]));  //  err
	//printf("%d\n", strlen(&c));   //6
	//printf("%d\n", strlen(&c + 1));    // 随机值
	//printf("%d\n", strlen(&c[0] + 1));  //  5


	char* p = "abcdef";
	printf("%d\n", sizeof(p));   //   4/8 p指向a的地址，地址的大小是4，单位是字节
	printf("%d\n", sizeof(p + 1));   //  4/8
	printf("%d\n", sizeof(*p));   //  1
	printf("%d\n", sizeof(p[0]));  //  1 p[0]==arr[0],是元素
	printf("%d\n", sizeof(&p));   //   4/8  计算的是指针p的地址
	printf("%d\n", sizeof(&p + 1));    // 4/8
	printf("%d\n", sizeof(&p[0] + 1));  //  4/8

	printf("%d\n", strlen(p));   //   6
	printf("%d\n", strlen(p + 1));   //  5
	//printf("%d\n", strlen(*p));   //  err
	//printf("%d\n", strlen(p[0]));  //  err
	printf("%d\n", strlen(&p));   //  随机值
	printf("%d\n", strlen(&p + 1));    // 随机值
	
	printf("%d\n", strlen(&p[0] + 1));  //  5

	printf("--------------------------------\n");

	int arr2[3][4] = { 0 };
	printf("%d\n", sizeof(arr2)); //  4/8
	printf("%d\n", sizeof(arr2[0][0])); // 4
	printf("%d\n", sizeof(arr2[0])); //16
	printf("%d\n", sizeof(arr2[0] + 1)); // 4/8
	printf("%d\n", sizeof(*(arr2[0] + 1))); //  4
	printf("%d\n", sizeof(arr2 + 1));  //  4/8
	printf("%d\n", sizeof(*(arr2 + 1)));  // 16
	printf("%d\n", sizeof(&arr2[0] + 1));  //4/8
	printf("%d\n", sizeof(*(&arr2[0] + 1)));  //16
	printf("%d\n", sizeof(*arr2));  //16 
	printf("%d\n", sizeof(arr2[3]));  //  16



	return 0;
}
