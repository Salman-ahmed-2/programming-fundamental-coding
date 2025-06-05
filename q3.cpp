#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"input a number:";
cin>>a;


    
for (int z=0; z<a; z++){

cout<<" ";}
cout<<"|"<<endl;
    for (int i=1; i<=a; i++) {
for (int p=a; p>i; p--){

         cout<<" ";
         
}
for(int k=1; k<=i; k++)
		{
			cout<<"\\";
		   } 
    

      cout<<"|";
      
 
       for (int j=1; j <=i; j++) {
    
          cout<<"/";
		  


            
        }
        cout<<endl;
    }
}
