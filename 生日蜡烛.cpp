#include <iostream>	//236
using namespace std; 
int main(){
	int n,i,j;
	cin >> n;
	for(i = 1;i < 200; i++){
		int sum = 0;
		for(j = i;j < 200; j++){
			sum += j;
			if(sum == n){
			cout << i << "	" << j << endl;
			break;
			}	
			else if(sum > n){
				break;
			}
		}
		
	}
	return 0;
}
