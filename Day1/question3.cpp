#include<iostream>

//function to get number from a keyboard
int getNum() 
{
 int number;
 std::cout<<"Enter a number\n";
 std::cin>>number;
 return number;
}

//function to check if number is even
bool checkEven(int number)
{
 bool result = (number % 2 == 0 ) ? true : false;
 return result;
}

//functions to print multiplication table
void printTable(int number)
{
 for(int i=1;i<=20;i++)
 {
 std::cout<<i<<" X "<<number<<" = "<<(number*i)<<std::endl;
 }
}

//function to print the first 30 rows of indivisible numbers
void printRows(int number)
{int count=0,numerator=0;
 while(count<=30)
 {
  if (numerator % number !=0)
  {
   std::cout<<numerator<<std::endl;
   count++;
  }
  numerator++;
 }
}

int main()
{
  int number = getNum();

  if(checkEven(number))
  {
    //number is even
    //so print multiplication table
    printTable(number);
  }else
  {
    //number is odd
    //so do the other thing
    printRows(number);
  }
}
