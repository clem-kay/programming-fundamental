#include<iostream>
#include<typeinfo>


void output(int input){
	std::cout<<"The input is: "<<input<<" "<<typeid(input).name()<<std::endl;
}
void output(char input){
	std::cout<<"The input is: "<<input<<" "<<typeid(input).name()<<std::endl;
}
void output(double input){
	std::cout<<"The input is: "<<input<<" "<<typeid(input).name()<<std::endl;
}
void output(long input){
	std::cout<<"The input is: "<<input<<" "<<typeid(input).name()<<std::endl;
}
void output(std::string input){
	std::cout<<"The input is: "<<input<<" "<<typeid(input).name()<<std::endl;
}

int main(){
	output(3);
	output(3.14);
	output("hi there");
//	output(myname);
}
