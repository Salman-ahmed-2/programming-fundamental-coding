//salman ahmed khan
//i24_3004
//section c





#include<iostream>
#include<string.h>
using namespace std;
int main()
{ unsigned int egg,egg30,egg24,egg18,egg12,egg6,r30,r24,r18,r12,r6;
//r30=remainder of 30 packing //egg30=no of 30 egg packing
cout<<"Enter total number of eggs:";
cin>>egg;
egg30=egg/30;
r30=egg%30;
cout<<"Number of 30 eggs packing:"<<egg30<<" Number of leftover eggs : "<<r30<<endl;
egg24=egg/24;
r24=egg%24;
cout<<"Number of 24 eggs packing:"<<egg24<<" Number of leftover eggs : "<<r24<<endl;
egg18=egg/18;
r18=egg%18;
cout<<"Number of 18 eggs packing:"<<egg18<<" Number of leftover eggs : "<<r18<<endl;
egg12=egg/12;
r12=egg%12;
cout<<"Number of 12 eggs packing:"<<egg12<<" Number of leftover eggs : "<<r12<<endl;
egg6=egg/6;
r6=egg%6;
cout<<"Number of 6 eggs packing:"<<egg6<<" Number of leftover eggs : "<<r6<<endl;
}
