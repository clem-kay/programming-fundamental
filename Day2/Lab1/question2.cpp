#include<iostream>

int main(){
	int number = 5;
	int * pntr = &number;
	int &ref =number;
	
	const int MYCONST = 4;
	
	std::cout<<"Before Increment\n";
	std::cout<<number<<std::endl<<pntr<<std::endl<<ref<<std::endl;
	
	//increasing the pointer
	(*pntr)++;
	
	std::cout<<"After Increment pointer\n";
	std::cout<<number<<std::endl<<pntr<<std::endl<<ref<<std::endl;
	
	//increasing the reference
	++ref;
	std::cout<<"After Increment reference\n"<<std::endl;
	std::cout<<number<<std::endl<<pntr<<std::endl<<ref<<std::endl;
	
	//outputing the decimal equivalent
	std::cout<<"Outputing the decimal equivalent\n";
	std::cout<<(int) 0xf3f2<<std::endl;
	std::cout<<(int) 0437<<std::endl;
	std::cout<<(int) 'a'<<std::endl;
}
