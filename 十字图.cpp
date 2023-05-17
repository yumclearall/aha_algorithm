#include <stdio.h>
char s[130][130];
void pdf(int n){
	for(int i = 0;i < 2 * n + 1;i += 2){
		for(int j = i + 2;j < 4 * n - i + 3; j++){
			s[i][j] = '$';
			s[4 * n + 4 - i][j] = '$';
		}
	}
	for(int i = 0;i < 2 * n + 1;i += 2){
		s[i + 1][i + 2] = '$';
		s[i + 1][4 * n - i + 2] = '$';
		s[4 * n - i + 3][i + 2] = '$';
		s[4 * n - i + 3][4 * n - i + 2] = '$';
	}
	for(int i = 0;i < n; i++){
		for(int j = 2 * i;j < 2 * i + 3; j++){
			s[2 * i + 2][j] = '$';
			s[4 * n + 4 - 2 * i - 2][j] = '$';
		}
		for(int j = 4 * n + 4 - 2 * i;j > 4 * n + 4 - 2 * i - 3; j--){
			s[2 * i + 2][j] = '$';
			s[4 * n + 4 - 2 * i - 2][j] = '$';
		}	
	}
	for(int i = 0;i < n; i++){
		for(int j = 0; j < 4 * i + 3; j++){
			s[j + (n - i) * 2 + 1][2 * (n - i) - 2] = '$';
			s[j + (n - i) * 2 + 1][4 * n + 4 - 2 * (n - i) + 2] = '$';
		}
	}
	for(int i = 0;i < 5; i++){
		s[2 * n + 2][2 * n + i] = '$';
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < 4 * n + 5; i++){
		for(int j = 0; j < 4 * n + 5; j++){
			s[i][j] = '.';
		}
	}
	pdf(n);
	for(int i = 0;i < 4 * n + 5; i++){
		for(int j = 0; j < 4 * n + 5; j++){
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
