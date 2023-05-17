#include <cstdio>
#include <cstdlib>
#include <ctime>
int main(){
	char s[10];
	srand(time(NULL));
	for(int i = 0;i < 10; i++){
		s[i] = 'A' + rand() % 26; 
	} 
	printf("%c",s[0]);
	for(int i = 1;i < 10; i++){
		printf(" %c",s[i]);
	}
	printf("\n");
	return 0;
}
