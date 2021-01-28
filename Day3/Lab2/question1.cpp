#include<iostream>
#include<cstring>

using namespace std;

void diplayChar(const char * senArray){

	while(*senArray){
		cout<<*senArray<<std::endl;
		*senArray++;
	}
}

int main()
{
 
 	string word;

 	cout<<"Enter a sentence"<<std::endl;
 	cin>> word;
	
 	char senArray [word.length()+1];

 	strcpy(senArray, word.c_str());

	diplayChar(senArray);
}

