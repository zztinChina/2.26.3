#include<stdio.h>
void my_strcpy(char* arr1,char* arr2)
{
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char arr[100] = "asdcddds";
	char arr2[] = "asdddsdddddddd";
	 my_strcpy(arr, arr2);
	printf("%s", arr);
	return 0;
}