
//salman ahmed khan
//i243004
//section c




 #include <iostream>  
using namespace std;
int main() {  
    int N1,N2,N3,N4,N5;  //N1=NUMBER 1  // N2=NUMBER //N3=NUMBER 3 

     
    cout<<"Enter 5 non-negative values:"<<endl;  
    cout<<"N1 => ";  
    cin>>N1;  
    cout<<"N2 => ";  
    cin>>N2;  
    cout<<"N3 => ";  
    cin>>N3;  
    cout<<"N4 => ";  
    cin>>N4;  
    cout<<"N5 => ";  
    cin>>N5;  

    
    int maxv ;  //maxv=max_value
    
    if (N1>N2 && N1>N3 && N1>N4 && N1>N5)
        maxv=N1;
    else if (N2>N1 && N2>N3 && N2>N4 && N2>N5)
        maxv=N2;
    else if (N3>N1 && N3>N2 && N3>N4 && N3>N5)
        maxv=N3;
    else if (N4>N2 && N4>N3 && N4>N1 && N4>N5)
        maxv=N4;
    else if (N5>N2 && N5>N3 && N5>N4 && N5>N1)
        maxv=N5;
    else 
        maxv=0;

    cout<<endl<<"Bar Chart:"<<endl;  
    
    for (int i=maxv; i>0;i--) 
	{
		if (i<10)
			cout<<"0";
		
			 
        cout<<i<<" ";
		   
        if (N1>=i) 
			cout<<"* ";  
        else 
			cout<<"  ";  

        if (N2>=i) 
			cout<<"* ";  
        else 
			cout<<"  ";  

        if (N3>=i) 
			cout<<"* ";  
        else 
			cout<<"  ";  

        if (N4>=i) 
			cout<<"* ";  
        else 
			cout<<"  ";  

        if (N5>=i)
			cout<<"* ";  
        else 
			cout<<"  ";  

		cout<<endl;   
    }  

      
   cout<<"   1 2 3 4 5"<<endl;  

      
}
