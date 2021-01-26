#include<iostream>

int getNumber(){
	int number;
	std::cout<<"Enter a number";
	std::cin>>number;
	return number;
}

int factorial(int number)
{
	if (number == 0)
		return 1;
	else
		return (number * factorial(number-1));
}
int main(){
	int number = getNumber();
	
	int result = factorial(number);
	std::cout<<"The factorial of "<<number<<" is : "<<result;
}
