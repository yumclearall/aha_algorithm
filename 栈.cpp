#include <iostream>
using namespace std;
struct stack{
	int data[1000];
	int top = -1;
	void push(int x){
		top++;
		if (top < 1000){
			data[top] = x;
		}else{
			top--;
			cout << "stack overflow" << endl;
		}
	}
	void pop(){
		if(top >= 0){
			top--;
		}
	}
	int topval(){
		if (top >= 0){
			return data[top];
		}
	}
}; 
using namespace std;
int main(){
	stack s;
	for (int i = 0; i < 10; i++){
		s.push(i + 1);
	}
	for (int i = 0; i < 10; i++){
		cout << s.topval() << " ";
		s.pop();
	}
	return 0;
}

