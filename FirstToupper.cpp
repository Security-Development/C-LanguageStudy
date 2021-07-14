#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[64] = ""; //str이라는 문자형 변수의 버퍼크기를 64만큼 할당
	char *p = str; // 
	strcpy(p, "hello world");
	
	if(islower(p[0])) //소문자 인지 판별 
		p[0] = toupper(p[0]); //p[0]에 담긴 문자를 대문자로 변경 
		
	puts(str); //puts()함수는 문자와 줄바꿈 문자를 출력 한다. 
}
