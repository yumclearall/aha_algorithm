#include <iostream>
int s[9],book[14];
int main(){
	int sum = 0;
	for(s[1] = 1; s[1] < 14; s[1]++){
		book[s[1]] = 1;
		
		for(s[2] = 1; s[2] < 14; s[2]++){
			if( s[1] + s[2] < 14 && book[s[1] + s[2]] == 0 && book[s[2]] == 0){
				book[s[2]] = 1;
				book[s[1] + s[2]] = 1;
				
				for(s[3] = 1; s[3] < 14; s[3]++){
					if(book[s[3]] == 0){
						book[s[3]] = 1;
						
						for(s[4] = 1; s[4]< 14; s[4]++){
							if(s[3] - s[4] > 0 && book[s[3] - s[4]] == 0 && book[s[4]] == 0){
								book[s[4]] = 1;
								book[s[3] - s[4]] = 1;
								
								for(s[5] = 1; s[5] < 14; s[5]++){
									if(book[s[5]] == 0){
									book[s[5]] = 1;
									
									for(s[6] = 1; s[6]< 14; s[6]++){
										if(s[5] * s[6] < 13 && book[s[5] * s[6]] == 0 && book[s[6]] == 0 && s[5] * s[6] != s[6]) {
											book[s[6]] = 1;
											book[s[5] * s[6]] = 1;
											
											for(s[7] = 1; s[7] < 14; s[7]++){
												if(book[s[7]] == 0){
												book[s[7]] = 1;
												
												for(s[8] = 1; s[8]< 14; s[8]++){
													if(s[7] % s[8] == 0 && s[7] / s[8] > 0 && book[s[7] / s[8]] == 0 && book[s[8]] == 0 && s[7] / s[8] != s[8]){
														book[s[8]] = 1;
														book[s[7] / s[8]] = 1;
													//	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n\n",s[1],s[2],s[1] + s[2],s[3],s[4],s[3] - s[4],s[5],s[6],s[5] * s[6],s[7],s[8],s[7] / s[8]);
														sum++;
														book[s[8]] = 0;
														book[s[7] / s[8]] = 0;}}
														book[s[7]] = 0;}}
											book[s[6]] = 0;
											book[s[5] * s[6]] = 0;}}
											book[s[5]] = 0;}}
								book[s[4]] = 0;
								book[s[3] - s[4]] = 0;
							}
						}
					book[s[3]] = 0;
			}
			}
			book[s[1] + s[2]] = 0;
			book[s[2]] = 0;
		}
		
		} 
		book[s[1]] = 0;
	}
	printf("%d\n",sum);
return 0;
}
