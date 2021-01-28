#include<iostream>
using namespace std;
void operation(int, int);

void getInput() {
	int num1,num2;
	cout<<"Please input two operands:\n";
	cin>>num1>>num2;
	
	operation(num1,num2);
	
}

void operation (int num1, int num2) {
	char op;
	cout<<"Please input an operator:";
	cin>>op;
	
	switch (op){
		case '+':
			cout<<"Adding "<<num1<<" and "<<num2<<" : "<<num1+num2;
			break;
		case '-':
			cout<<"Subtracting "<<num1<<" and "<<num2<<" : "<<num1-num2;
			break;
		case '*':
			cout<<"Product of "<<num1<<" and "<<num2<<" : "<<num1*num2;
			break;
		case '/':
			if(num2 == 0){
				cout<<"Cannot divide by 0";
				break;
			}
			else{
			cout<<"Dividing "<<num1<<" and "<<num2<<" : "<<num1/num2;
			break;
			}
		default:		
			cout<<"Invalid Input";
			break;
				
	}
	
}

int main(){
	getInput();
}
