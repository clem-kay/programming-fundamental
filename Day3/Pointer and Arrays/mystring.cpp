#include<iostream>
#include"./mystring.h"
//namespace for string functions
namespace my{
    
    //strcompare
    int strcmp (const char *l, const char *r){

        int i=0;
         while(l[i] !='\0'){
             if (l[i] == r[i]) i++;
             else{
                 return 0;
             }
         }
         return 1;
    }

    //string length
    int strlen(const char *s){
        int count = 0;
        int i = 0;
        while(s[i] !='\0'){
            count++;
            i++;
        }
        return count;

    }

    //strcat
    char *strcat(char *l, const char *r){
        
        int n = my::strlen(l) + my::strlen(r);
        char newWord[n]; 

    int i =0;
         for (i=0;i<n;i++){
             newWord[i] = l[i]; 
             newWord[i+strlen(l)] = r[i];
         }
         return newWord;
    }

    //strcpy
    char *strcpy(char *l, const char *r){
        
        char *start {l};
        while (*l++ == *r++);
        return start;

    }

    // //
    // char *toupper(char *s){
    //     // for(int i=0;i<std::)
    // }
}
