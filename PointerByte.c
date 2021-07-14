#include <stdio.h>

int main()
{
	//pointer 변수의 byte의 크기가 8 = 64bit, 4 = 32bit 
	//원래는 %d로 하지만 C언의 표준을 엄격하게 따르자면 %zd이다. 8진수 %zo, 16진수 %zx
	printf("%zd", sizeof(int*)); 
}
