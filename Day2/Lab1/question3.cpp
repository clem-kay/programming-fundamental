#include<iostream>

using namespace std;

// int main(){
// 	string sen,temp=" ";
// 	int counter =0;
// 	cout<<"Enter a sentence"<<std::endl;
// 	cin>> sen;
	
// 	char senArray [sen.length()+1];

// 	strcpy(senArray, sen.c_str());

	
// 		for(int i=0;i<=sizeof(senArray);i++){
// 			if(senArray[i] != '-'){
// 				temp +=senArray[i];
// 				counter+=1;
// 			}else{
// 				std::cout<<"["<<counter<<"]"<<temp<<std::endl;
// 				temp =" ";
// 				counter=0;
// 			}
			
// 		}
// 		std::cout<<"["<<counter<<"]"<<temp<<std::endl;

// }

int main(){
	string sen;
	string *pntr;
	cout<<"Enter a sentence"<<std::endl;
 	cin>> sen;

	pntr = &sen;
	 cout<<pntr;
}