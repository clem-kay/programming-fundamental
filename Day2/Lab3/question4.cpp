#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	string word;
	
	cout<<"Enter a line of text";
	cin>>word;
	
	char senArray [word.length()+1];

	strcpy(senArray, word.c_str());
	
	for (int i=sizeof(senArray);i>=0;i--){
		cout<<senArray[i];
	}
	
	
}
