/* NAME : SALMAN AHMED KHAN
CLASS: SE-C
ROLL.NO I24-3004

QUESTION #2= REVERSAL OF NUMBERS!!
Write pseudocode, make flow chart and then write C++ code for the following program. 
If a five-digit number (Integer) is input through the keyboard, write a program to reverse the number. The entered number will always be of 5 digits 


*/

            
#include<iostream>
using namespace std;
int main()
{    int num ,fifth_digit,forth_digit,third_digit,second_digit,first_digit,reversed_number;
	cout<<"ENTER FIVE DIGITS NUMBER"<<endl;
	cin>>num;
	fifth_digit=num%10;
	fifth_digit=10000*fifth_digit;
	
	forth_digit=(num%100)/10;
	forth_digit=1000*forth_digit;
	
	third_digit=(num%1000)/100;
	third_digit=100*third_digit;
	
	second_digit=(num%10000)/1000;
	second_digit=10*second_digit;
	
	first_digit=(num%100000)/10000;
	first_digit=1*first_digit;
	
	reversed_number=(fifth_digit+forth_digit+third_digit+second_digit+first_digit);
	
	cout<<"REVERSE OF NUMBER IS : "<<reversed_number;
	
}
	
