#include<iostream>//Including Standard/Main Input/Output Library
#include<conio.h>//Including Console Input/Output Library
using namespace std;

int main ( void ) 

{
	int f = 0;//Variable for first number of the series
	int s = 1;//Variable for second number of the series
	int next;//Variable for next number of the series
	int no;//Variable for number of elements of the series
	cout<<"Enter the number of elements of Fabonacci Series to be calculated: ";/*Prompting the user to input the 
	 number of term of the series*/
	cin>>no;//Taking input from user and storing it in variable "no" 
	cout<<no<<" Number of terms/elemnts will be printed\n";/*Displaying the number of terms that will be calculated
	 and displayed*/
	
	for( unsigned int i = 0 ; i < no ; i++ ) { //Using "for" loop for calculating the terms of the series 
		if (i <= 1){//Using if .... else logic to check the value of "i"
			next = i;//Giving "next" the value of "i"
			cout<<next<<",";//Displayin the value of "next if the condition is "True"
		} else { 
		
			next = f + s ;//Assigning the value of sum of "f" and "s" to "next"
			cout<<next<<",";//Displaying the value of "next" followed by a comma
			f = s;//Assigning "f" the value of "s"
			s = next;//Assigning "s" the value of "ext"
		}
	}
	getch();
}