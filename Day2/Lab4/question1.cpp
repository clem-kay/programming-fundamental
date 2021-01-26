#include<iostream>

int input();

void output(int num1 ,int num2);

int main(){
	
	input();
}

int input (){
	int num1,num2;
	std::cout<<"Enter two integers: ";
	std::cin>>num1>>num2;
	
	output(num1,num2);
}

void output(int num1, int num2){
	std::cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2;
}
