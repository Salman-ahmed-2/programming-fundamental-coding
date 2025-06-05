/* NAME : SALMAN AHMED KHAN
CLASS: SE-C
ROLL.NO I24-3004

QUESTION #3= GIVE ME MY MONEY!!
Write pseudocode, make flow chart and then write C++ code for the following program. 
A cashier has currency notes of denominations Rs 10, Rs 50 and Rs 100. If the amount to be withdrawn is inputted through the keyboard in hundreds and is always divisible by 10, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer. Just so you know, the cashier will always provide cash from higher dominations first. 


*/

            
#include<iostream>
using namespace std;
int main()
{  int amount,hundred,fifty,ten;
	
	cout<<"INPUT OF WITHDRAW AMOUNT : ";
	cin>>amount;
	hundred=amount/100;     //no of 100 notes  //due to int it will ignore decimal values
	fifty=(amount%100)/50;   //no of fify notes
	ten=(amount%50)/10;            // no of 10 notes
	cout<<endl<<hundred<<" hundred Rs notes, "<< fifty<<" fifty Rs notes, "<<ten<<" ten Rs notes ";
	
}
