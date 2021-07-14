#include <stdio.h>
#include <ctype.h>

int count_space(const char* s)//문자열의 매개변수가 함수 내에서 변경 되지 않을땐 const를 붙이자! 
{
	int count=  0;
	while(*s != '\0') { //'\0'은 NUll을 가르키며 아스키코드값 0에 해당 됩니다. 
		if(isspace(s[0]))
			count++;
		s++;// 다음 문자를 가르키기 위해 값 증가 
	}
	return count;
} 

int main()
{
	printf("%d", count_space("hello   world"));
	//출력 내용 : 3 
}
