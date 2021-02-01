#include<iostream>
#include<string>
#include<cstring>
#include "./mystring.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string word;
    cout<<"Enter a string"<<endl;
    getline(cin, word);
    const char *newWord = word.c_str();

    for(int i=0;i<strlen(newWord);i++){
        cout<<newWord[i];
    } 

    const char newString[] = "hello";
    my::strcmp(newString, newWord) ? cout<<"equal" : cout<<"Not equal";
    const char *concat = my::strcat("newString",newWord);
    cout<<"THe lenght of the word is "<<my::strlen(newWord);
}