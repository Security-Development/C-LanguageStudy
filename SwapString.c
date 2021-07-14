#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 128

int swap_string(char * lhs, char * rhs, int size){
	int lhs_len = strlen(lhs) + 1;
	int rhs_len = strlen(rhs) + 1;
	char temp[SIZE] = "";
	
	if(lhs_len > size || rhs_len > size)
		return 0;
		
	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	return 1;
}

int main()
{	
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	
	printf("문자열 2개를 입력 하세요\n");
	scanf("%s %s", str1, str2);
	
	printf("str1=%s, str2=%s\n", str1, str2);
	swap_string(str1, str2, SIZE); 
	printf("str1=%s, str2=%s", str1, str2);
}
