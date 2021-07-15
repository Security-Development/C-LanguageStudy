#include <stdio.h>
#include <string.h>

bool checkWord(char *str) {
	int len = strlen(str);
	
	for(int i = 0; i < len /2; i++){
		if(str[i] != str[len -1 -i])
		{
			return false;
			break;
		}	
	}
	return true;
}

int main(){
	char input[64] = "";
	scanf("%s", &input);
	printf("%s", checkWord(input) ? "회문 입니다." : "회문이 아닙니다.");
}
