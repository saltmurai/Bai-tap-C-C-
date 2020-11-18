#include<iostream>
#include<string.h>
using namespace std;

void strip_extra_spaces(char* str) {
  int i, x;
  for(i=x=0; str[i]; ++i)
    if(!isspace(str[i]) || (i > 0 && !isspace(str[i-1])))
      str[x++] = str[i];
  if (isspace(str[x-1])) str[x - 1] = '\0';
  else str[x] = '\0';
}

char* Viet(char* str){
    for(int i = 0; str[i]; i++) strip_extra_spaces(str);
    for(int i = 0; i < strlen(str); i++){
		*str = toupper(*str);
		if(*(str+i) == ' ' && isalpha(*(str+i+1)))
			*(str+i+1) = toupper(*(str+i+1));        
	}
	return str;
}

int main(){
	char str[] = "         pham quang sang    ";
	char* ptr = str;
	cout << Viet(ptr);
	return 0;
}
