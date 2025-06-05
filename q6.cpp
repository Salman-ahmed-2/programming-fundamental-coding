//salman ahmed khan
//i24_3004
//section c





#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int year_of_service,rating,salery,overtime;
	float bonus1=0,bonus2=0,bonus3=0,bonus4=0,total_salary=0;
	char location, department;
	cout<<"Input: Years of service:";
	cin>>year_of_service;
	do {
	cout<<"Input: Performance rating (1 to 5):";
	cin>>rating;}
	while (rating>5);

	cout<<"Input: Annual salery:"<<endl;
	cin>>salery;
	cout<<"Input: Overtime hours:"<<endl;
	cin>>overtime;
	retakedepartment:
	cout<<"Input: Department ('e' or 'E' Engineering, 's' or 'S' for  Sales,  'O' or 'o' for  Other):"<<endl;
	cin>>department;
	
	if(department=='o' || department=='e' || department=='E' || department=='s' ||department=='S' || department=='O') 
	cout<<"";
	else {
	cout<<"invalid character:"<<endl;
	goto retakedepartment;
}
	retakelocation:
	cout<<"Input: Work location/n (for Region A TYPE 'a' or 'A'\n             for Region B TYPE 'b' or 'B', \n              for Other TYPE 'O' or 'o'):"<<endl;
	cin>>location;
	if(location=='a' || location=='A' || location=='b' || location=='B' ||location=='o' || location=='O') 
	cout<<"";
	else {
	cout<<"invalid character:"<<endl;
	goto retakelocation;
}
	if (year_of_service>=3 && rating>=3 )
	{
	
		cout<<"you are eligible for bonus:"<<endl;
		if (year_of_service>=3 && year_of_service<=5 && rating ==5 )
		{
			bonus1=0.1*salery;
		}
	else	if (year_of_service>=3 && year_of_service<=5 && rating ==4 )
		{
			bonus1=0.07*salery;
		}
	else	if (year_of_service>=3 && year_of_service<=5 && rating ==3 )
		{
			bonus1=0.05*salery;
		}
	else	if (year_of_service>5 && year_of_service<=10 && rating ==5 )
		{
			bonus1=0.15*salery;
		}
	else	if (year_of_service>3 && year_of_service<=10 && rating ==4 )
		{
			bonus1=0.10*salery;
		}
	else	if (year_of_service>3 && year_of_service<=10 && rating ==3 )
		{
			bonus1=0.08*salery;
		}
	else	if (year_of_service>10 && rating ==5 )
		{
			bonus1=0.20*salery;
		}
	else	if (year_of_service>10 && rating ==4 )
		{
			bonus1=0.15*salery;
		}
	else	if (year_of_service>10  && rating ==3 )
		{
			bonus1=0.12*salery;
		}
		else
		bonus1=0;
		
		
	}
	cout<<"Year of service bonus:"<<bonus1<<endl;
if (overtime>100 && overtime<=200){
if (rating==5)
bonus2=salery*0.03;
else
    bonus2=salery*0.02;
    }else if (overtime>200){
	if (rating==5)
bonus2=salery*0.05;
else
    bonus2=salery*0.04;
    
}
cout<<"overtime bonus:"<<bonus2<<endl;
 switch (department=='E' || department=='e'){
 	case 1:
 
	{bonus3=salery*0.05;
		cout<<"department bonus : "<<bonus3<<endl;
	}
	break;
} switch (department=='s' || department=='S')
			{ case 1:
				bonus3=salery*0.03;
					cout<<"department bonus : "<<bonus3<<endl;
				break;
			}
			switch (department=='o' || department=='O'){
			case 1:
			bonus3==0;
			cout<<"department bonus : "<<bonus3<<endl;
			break;}
		switch (location=='a' || location=='A'){
		
	
				{ case 1:
					bonus4=salery*0.05;
					cout<<"location bonus : "<<bonus4<<endl;
				}
				break;
				}switch (location=='b' || location=='B')
						{case 1:
							
							bonus4=salery*0.03;
							cout<<"location bonus : "<<bonus4<<endl;
							break;
						}
						switch (location=='o' || location=='O'){
						
						case 1:
						bonus4=0;
						cout<<"location bonus : "<<bonus4<<endl;
						break;}
					
	total_salary=salery+bonus1+bonus2+bonus3+bonus4;
	if (total_salary>100000){
	
	
	
	total_salary=total_salary*1.05;
		cout<<"As total salary after bonuse is above 1 lack so additional bonus is also applied :"<<endl;
		}
		
		cout<<"your salary including bonus is:"<<total_salary;
	}
