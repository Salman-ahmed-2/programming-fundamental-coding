/* NAME : SALMAN AHMED KHAN
CLASS: SE-C
ROLL.NO I24-3004

QUESTION #7= WHAT IS MY GPA


*/

            /* 
			
			variable=gpa 
			
			p4="4.00"
			p36="3.67",
			p33="3.33",
			p3="3.00",
			p267="2.67",
			p233="2.33",
			p2="2.00",
			p167="1.67",
			p133="1.33",
			p1="1.00",
			p0="0.00
            
            
            
            
            
            */
#include<iostream>                                                    
#include<string>
using namespace std;
int main()
{
	float a,b,c,d,e,w,y,z,v,x;      //v,w,x,y,z are credit hours      //a,b,c,d,e are marks
	float p4=4.00,p36=3.67,p33=3.33,p3=3.00,p267=2.67,p233=2.33,p2=2.00,p167=1.67,p133=1.33,p1=1.00,p0=0.00;
	cout<<"Enter your marks  in subject 1 : ";
	cin >> a ;
	cout<<"Enter your credit hours:";
	cin>>v;
	float a1= (a<=100&&a>=90)?p4:
	          (a<90&&a>=86)?p4:
			  (a<86&&a>=82)?p36:						// a=marks of subject 1
			  (a<82&&a>=78)?p33:
   			  (a<78&&a>=74)?p3:
			  (a<74&&a>=70)?p267:                   //subject 1
			  (a<70&&a>=66)?p233:
			  (a<66&&a>=62)?p2:
			  (a<62&&a>=58)?p167:
			  (a<58&&a>=54)?p133:
			  (a<54&&a>=50)?p1:
			  (a<50&&a>=0)?p0:p0;
	cout<<"Grade Points:"<<a1<<endl<<"credit hours:"<<v<<endl;
	
	
	
		
			cout<<"enter your marks  in subject 2 : ";
	cin >> b ;
	cout<<"enter your credit hours:";
	cin>>w;
	float b1=(b<=100&&b>=90)?p4: 
		     (b<90&&b>=86)?p4:
	         (b<86&&b>=82)?p36:						// B=marks of subject 2
  		     (b<82&&b>=78)?p33:                //subject 2
			 (b<78&&b>=74)?p3:
	   		 (b<74&&b>=70)?p267:
    		 (b<70&&b>=66)?p233:
			 (b<66&&b>=62)?p2:
			 (b<62&&b>=58)?p167:
    		 (b<58&&b>=54)?p133:
     		 (b<54&&b>=50)?p1:
    		 (b<50)?p0:0;
	cout<<"Grade Points:"<<b1<<endl<<"credit hours:"<<w<<endl;
	
			cout<<"enter your marks  in subject 3 : ";
	cin >> c ;
	cout<<"enter your credit hours:";
	cin>>x;
	float c1=(c<=100&&c>=90)?p4:
              (c<90&&c>=86)?p4:
	          (c<86&&c>=82)?p36:
           	  (c<82&&c>=78)?p33:							// C=marks of subject 3
			  (c<78&&c>=74)?p3:							 //subject 3
			  (c<74&&c>=70)?p267:
			  (c<70&&c>=66)?p233:
 		      (c<66&&c>=62)?p2:
         	  (c<62&&c>=58)?p167:
	          (c<58&&c>=54)?p133:
	          (c<54&&c>=50)?p1:
	          (c<50)?p0:0;
	cout<<"Grade Points:"<<c1<<endl<<"credit hours:"<<x<<endl;
	
	
	
			cout<<"enter your marks  in subject 4: ";
	cin >> d ;
	cout<<"enter your credit hours:";
	cin>>y;
	float d1=(d<=100&&d>=90)?p4: 
              (d<90&&d>=86)?p4:
	          (d<86&&d>=82)?p36:						// D=marks of subject 4
              (d<82&&d>=78)?p33:
	          (d<78&&d>=74)?p3:
	          (d<74&&d>=70)?p267:					 //subject 4
	          (d<70&&d>=66)?p233:
	          (d<66&&d>=62)?p2:
	          (d<62&&d>=58)?p167:
	          (d<58&&d>=54)?p133:
	          (d<54&&d>=50)?p1:
	          (d<50)?p0:0;
	cout<<"Grade Points:"<<d1<<endl<<"credit hours:"<<y<<endl;
	
	
	
		cout<<"enter your marks  in subject 5 : ";
	cin >> e ;
	cout<<"enter your credit hours:";
	cin>>z;
	float e1=(e<=100&&e>=90)? p4: 
	          (e<90&&e>=86)?p4:
	          (e<86&&e>=82)?p36:
	          (e<82&&e>=78)?p33:							// e=marks of subject 5
	          (e<78&&e>=74)?p3:
	          (e<74&&e>=70)?p267:							 //subject 5
	          (e<70&&e>=66)?p233:
	          (e<66&&e>=62)?p2:
	          (e<62&&e>=58)?p167:
	          (e<58&&e>=54)?p133:
	          (e<54&&e>=50)?p1:
	          (e<50)?p0:0;
	cout<<"Grade Points:"<<e1<<endl<<"credit hours:"<<z<<endl;
	
	 // to calculate gpa
	 float gpa;
	  gpa=((a1*v)+(b1*w)+(c1*x)+(d1*y)+(e1*z))/(v+w+x+y+z);
	 
	 
	 cout << "GPA calculated :"<<gpa;
	 										//message to user
	 string message=(gpa==4.00)?"CONGRAGULATION YOUR NAME IS PLACED IN RECTOR LIST OF HONORS":
	            	(gpa<=3.5&&gpa>4.00)?"CONGRAGULATION YOUR NAME IS PLACED IN DEAN'S LIST OF HONORS":
	 		        (gpa<=2.00)?"YOUR NAME IS PLACED IN WARNING LIST ":" ";
	cout<<message;
	 
	 
	 
	 

	
}
