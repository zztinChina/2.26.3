#include<stdio.h>
void my_strcat(char* arr1, const char* arr2)
{
	//int count = 0;

	while (*arr1)
	{
		arr1++;
	}
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char arr[100] = "asdcddds";
	char arr2[] = "asdddsddddheheh";
	 my_strcat(arr, arr2);
	printf("%s", arr);
	return 0;
}