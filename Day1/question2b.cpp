#include <bits/stdc++.h> 
#include<iostream>

void calculateMean(int array[], int size)
{
	int total=0;
	for (int i=0;i<size;i++){
		total += i;
	}	
	std::cout<<"The mean is "<<total<<std::endl;
}

void findMedian(int array[], int size){
	std::cout<<"The median is "<<array[2]<<std::endl;
}

int main()
{
	int total;
	std::cout<<"Enter the total numbers";
	std::cin>>total;
	
	int array[total];
	int n = sizeof(array)/sizeof(array[0]); 
	
	for(int i=0;i<total;i++){
		std::cout<<"Enter the number"<<(i+1);
		std::cin>>array[i];
	}
	
	std::sort(array, array+n); 
	
	//calculating the mean
	calculateMean(array, total);
	findMedian(array,total);
}
