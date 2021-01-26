#include<iostream>
#include<typeinfo>


void output(int input){
	std::cout<<"The input is: "<<input<<" "<<typeid(input).name()<<std::endl;
}
void output(char input [],int start, int end = 0){
	int programEnd;
	if (end == 0){
		programEnd = sizeof(input);
	}else{
		programEnd = end ;
	}
	for (int i=start;i<programEnd;i++){
		std::cout<<input[i];
	}
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
	char array [] = {"Clement"};
//	output(3);
//	output(3.14);
//	output("hi there");
	output(array,3,2);
}
