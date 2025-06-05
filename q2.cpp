


//salman ahmed khan
//i24_3004
//section c





#include<iostream>
#include<string.h>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{ 
int j,maxv,minv,op,rand1,rand2,seed;
float ans,ansg;
char q;	cout<<"Type number of question in exercise:"<<endl;
	cin>>j;
	for (int i=0; i<j;i++){
	
	cout<<"Input 1 for ADDITION(+) \n input 2 for subtraction(-)\n input 3 for multiplition(X)\ninput 4 for division(/)\n";
	cin>>op;
	cout<<"Maximum value:\n";
	cin>>maxv;
	cout<<"  Allow negative numbers: Type 'n' or 'N' for No and 'y ' or 'Y' for yes\n";
	cin>>q;
	switch (q){
	
	case 'n':
		case 'N':{
				
						rand1=rand()%(maxv-0+1)+0;
				rand2=rand()%(maxv-0+1)+0;
					 srand(time(0));
					
					switch (op){
					
					case 1:
					
					rand1=rand()%(maxv-0+1)+0;
				rand2=rand()%(maxv-0+1)+0;
				break;
				case 2:
							
									rand2=rand()%(maxv-0+1)+0;
					rand1=rand()%(maxv-0+1)+0;
							
						do
							{
							
							  srand(time(0));
							
							rand1=rand()%(maxv-0+1)+0;}
							while(rand1<rand2);
							break;
							case 3:
							rand1=rand()%(maxv-0+1)+0;
				rand2=rand()%(maxv-0+1)+0;
										break;								
										case 4:
							rand1=rand()%(maxv-0+1)+0;
				rand2=rand()%(maxv-0+1)+0;
								while(rand2==0)
							{
							
							 seed=time(0);
							srand(seed);
					rand2=rand()%(maxv-0+1)+0;}
						 break; }
						 break;}
			
				case  'y':
					case 'Y':{
					
						
						minv=-maxv;
								rand1=rand()%(maxv-0+1)+0;
				rand2=rand()%(maxv-0+1)+0;
						switch (op){
							case 1:
					
					rand1=rand()%(maxv-minv+1)+minv;
				rand2=rand()%(maxv-minv+1)+minv;
				break;
						
						case 2:
							
							
							while(rand2<rand1)
							{
							
							  seed=time(0);
							srand(seed);
							rand2=rand()%(maxv-minv+1)+minv;}
							break;
							case 3:
							rand1=rand()%(maxv-minv+1)+minv;
				rand2=rand()%(maxv-minv+1)+minv;
										break;
							case 4:
							rand1=rand()%(maxv-minv+1)+0;
				rand2=rand()%(maxv-minv+1)+0;
								while(rand2==0)
							{
							
							 seed=time(0);
							srand(seed);
						rand2=rand()%(maxv-minv+1)+minv;}
						break;	}}
							
					break;	}
					
	
	switch (op){
	
	case 1:
	
		ans=rand1+rand2;
		cout<<rand1<<" + "<<rand2<<" = ";
		cin>>ansg;
		if(ans==ansg)
		cout<<"Congragulate  "<<endl;
		else
		cout<<"Wrong  "<<endl;
		break;
	
	case 2:
	
		ans=rand1-rand2;
		cout<<rand1<<"  -  "<<rand2<<"  =  ";
		cin>>ansg;
		if(ans==ansg)
		cout<<"Congragulate "<<endl;
		else
		cout<<"Wrong "<<endl;
		break;
	
		case 3:
	
		ans=rand1*rand2;
		cout<<rand1<<" * "<<rand2<<" = ";
		cin>>ansg;
		if(ans==ansg)
		cout<<"Congragulate"<<endl;
		else
		cout<<"Wrong"<<endl;
		break;
	
		case 4:
	
		float ansd,ansgd;
		
		ans=static_cast<float>(rand1)/rand2;
	
		cout<< (rand1)<<" / "<<rand2<<" = ";
		cin>>ansgd;
		if(abs(ans-ansgd)<1e-2)
		cout<<"Congragulate"<<endl;
		else
		cout<<"Wrong"<<endl;
	break;	}
}}
