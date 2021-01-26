#include<iostream>

int main(){
	enum {RED, YELLOW, AMBER=YELLOW, GREEN};
	
	std::cout<<"----------------------\n";
	std::cout<<"RED ----------------"<<RED<<std::endl;
	std::cout<<"YELLOW -------------"<<YELLOW<<std::endl;
	std::cout<<"AMBER --------------"<<AMBER<<std::endl;
	std::cout<<"GREEN --------------"<<GREEN<<std::endl;
}
