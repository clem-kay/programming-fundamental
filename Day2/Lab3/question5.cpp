#include<iostream>
#include<string>

using namespace std;

int main(){
	int total,i=0,count;
	string longest;
	cout<<"Enter total number of words";
	cin>>total;
	
	string wordArray[total];
	
	//getting individual element in the array
	cout<<"Enter individual words/n";
	for(i=0;i<total;i++){
	 cin>>wordArray[i];	
	}
	
	longest = wordArray[0];
	//looping to get the longest character
	for(i=0;i<total;i++){
		if(wordArray[i].length() > longest.length()){
				longest = wordArray[i];
				count = wordArray[i].length();	
			}
		}
		
		cout<<"The longest word is "<<longest<<" with a length of "<<count;
}
	
