//salman ahmed khan
//i24_3004
//section c


#include<iostream>
using namespace std;

int main()
{ 


cout<<"///////////////////////////////////////////TIC TAC TOE ///////////////////////////////////////"<<endl;
	int p=1;
	string b;//b=block
	char block1='1',block2='2',block3='3',block4='4',block5='5',block6='6',block7='7',block8='8',block9='9';
	cout<<"______________________________________"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|      1   |      2     |      3      |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|__________|____________|_____________|"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|      4   |      5     |      6      |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|__________|____________|_____________|"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|     7    |      8     |      9      |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|__________|____________|_____________|"<<endl;
do {
		
	flag:
	switch (p%2==1)
	 {
	 	case 1:
	 	cout<<"Player 1 turn: type ' O '";
	 	break;
	 
	 case 0: 
	 	 cout<<"Player 2 turn: type ' X '";
	 	 break;
	 }
	cout <<" Enter block number : ";
	cin>>b;
	cout<<endl;
	if ( b=="1" && p%2!=0)
	{
		if (block1=='1')
			block1='O';
		else 
		{
			cout<<"dont over write! choose another block";
			goto flag;
		}
	}
	else if ( b=="2"&& p%2!=0)
	{
		if (block2=='2')
		block2='O';
		else 
		{
		cout<<"dont over write! choose another block";
		goto flag;
		}
	}
	else if(b=="3"&& p%2!=0)
	{
		if (block3=='3')
			block3='O';
		else 
		{
			cout<<"dont over write! choose another block";
			goto flag;
		}
	}
	else if( b=="4"&& p%2!=0)
	{
		if (block4=='4')
			block4='O';
		else 
		{
			cout<<"dont over write! choose another block";
			goto flag;
		}
	}
	else if (  b=="5"&& p%2!=0)
	{
		if (block5=='5')
			block5='O';
		else 
		{
			cout<<"dont over write! choose another block";
			goto flag;
		}
	}
	else 	if (  b=="6"&& p%2!=0)
		{
	if (block6=='6')
	block6='O';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	 else if (  b=="7"&& p%2!=0)
		{
	if (block7=='7')
	block7='O';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if (  b=="8"&& p%2!=0)
		{
	if (block8=='8')
	block8='O';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if ( b=="9"&& p%2!=0)
		{
	if (block9=='9')
	block9='O';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	
		else if ( b=="1" && p%2==0)
		{
	if (block1=='1')
	block1='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if ( b=="2"&& p%2==0)
	{
	if (block2=='2')
	block2='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if (  b=="3"&& p%2==0)
		{
	if (block3=='3')
	block3='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else if ( b=="4"&& p%2==0)
	{
	if (block4=='4')
	block4='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if (  b=="5"&& p%2==0)
		{
	if (block5=='5')
	block5='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if (  b=="6"&& p%2==0)
		{
	if (block6=='6')
	block6='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	 else if (  b=="7"&& p%2==0)
	{
	if (block7=='7')
	block7='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if (  b=="8"&& p%2==0)
		{
	if (block8=='8')
	block8='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}
	else 	if ( b=="9"&& p%2==0)
		{
	if (block9=='9')
	block9='X';
	else 
	{cout<<"dont over write! choose another block";
	goto flag;}
	}

	else {
	
	cout<< "invalid block  :"<<endl;
	goto flag;}
	

	cout<<"______________________________________"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|     "<<block1<<"    |     "<<block2<<"      |        "<<block3<<"    |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|__________|____________|_____________|"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|     "<<block4<<"    |     "<<block5<<"      |      "<<block6<< "      |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|__________|____________|_____________|"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|     "<<block7<<"    |     "<<block8<<"      |       " <<block9<<"     |"<<endl;
	cout<<"|          |            |             |"<<endl;
	cout<<"|__________|____________|_____________|"<<endl;
	p++;

	
if ((block1=='X' && block2=='X' && block3=='X') ||  
    (block4=='X' && block5=='X' && block6=='X') ||  
    (block7=='X' && block8=='X' && block9=='X') ||  
    (block1=='X' && block4=='X' && block7=='X') ||  
    (block2=='X' && block5=='X' && block8=='X') ||  
    (block3=='X' && block6=='X' && block9=='X') ||  
    (block1=='X' && block5=='X' && block9=='X') ||  
    (block3=='X' && block5=='X' && block7=='X'))   
{  
    cout<<"2 player win"; break; 
}  
else if ((block1=='O' && block2=='O' && block3=='O') ||  
    (block4=='O' && block5=='O' && block6=='O') ||  
    (block7=='O' && block8=='O' && block9=='O') ||  
    (block1=='O' && block4=='O' && block7=='O') ||  
    (block2=='O' && block5=='O' && block8=='O') ||  
    (block3=='O' && block6=='O' && block9=='O') ||  
    (block1=='O' && block5=='O' && block9=='O') ||  
    (block3=='O' && block5=='O' && block7=='O'))   
{  
    cout<<"1 player win";  
    break;
}
else if(p==10)
{
	cout<<"DRAW";
}
	
	
	}
	while ( p<=9);

	}
