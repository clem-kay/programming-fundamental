 #include<iostream>

int main()
{
 int i,number,total=0;
 
 for(i=0;i<5;i++)
 {
  std::cout<<"Enter a number"<<(i+1)<<" ";
  std::cin>>number;
  total += number;
 }

 std::cout<<"The mean is: "<<total<<"\n";

}
