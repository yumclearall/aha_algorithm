#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a,b,c,d;
	for(a = 0;a * a <= n; a++){
		for(b = a;a * a + b * b <= n; b++){
			for(c = b;a * a + b * b + c * c <= n; c++){
				for(d = c;d * d + a * a + b * b + c * c <= n; d++){
					if(d * d + a * a + b * b + c * c == n){
						cout << a << " " << b << " " << c << " " << d << endl;
					}
				}
			}
		} 
	} 
	return 0;
} 
