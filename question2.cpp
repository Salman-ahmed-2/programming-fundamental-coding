//salman ahmed khan
//i243004
//section c





#include <iostream>
using namespace std;

char lift_status = 'W'; // 'W' is for working, 'H' is for halted

// Function declarations
int liftup(int current_floor, int requested_floor);
int liftdown(int current_floor, int requested_floor);
int liftOperatingSystem(int requested_floor, int current_floor, char lift_status);
char halt_lift(char status);
char un_halt_lift(char status);

int main() {
    int choice,requested_floor,current_floor=-1; // Initial floor (basement)

    while (true) {
        cout<<"\nMenu:"<<endl;
    cout<<"1. Go to a floor"<<endl;
    cout<<"2. Halt the lift"<<endl;
    cout<<"3. Go to a floor"<<endl;
 cout<<"4. Unhalt the lift"<<endl;
  cout<<"5. Go to a floor"<<endl;
  cout<<"6. Exit"<<endl;
  cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
         case 3:
          case 5:
  if (lift_status=='H') {
                    cout<<"The lift is halted. Unhalt it first."<<endl;
      break;
                }
   do {
                    cout<<"Enter the requested floor (-1 to 4): ";
            cin>>requested_floor;
    if (requested_floor<-1 || requested_floor>4) {
	        cout<<"Invalid floor. Please enter a valid floor (-1 to 4)."<<endl;
                    }
   } while (requested_floor<-1 || requested_floor>4);

       current_floor=liftOperatingSystem(requested_floor, current_floor, lift_status);
                cout<<"Lift moved to floor: "<<current_floor<<endl;
         break;

     case 2:
                lift_status=halt_lift(lift_status);
         cout<<"The lift has been halted."<<endl;
                break;

  case 4:
                lift_status=un_halt_lift(lift_status)     ;
				          cout<<"The lift has been unhalted."<<endl;
    break;

            case 6:
                cout<<"Exiting the system. ALLAH HAFIZ"<<endl;
          return 0;

            default:
                cout<<"Invalid choice. Please try again."<<endl;
                break;
}    }}

int liftup(int current_floor, int requested_floor) {
    cout<<"Moving up from floor "<<current_floor<<" to floor "<<requested_floor<<endl;
    return requested_floor;
}

int liftdown(int current_floor, int requested_floor) {
    cout << "Moving down from floor " << current_floor << " to floor " << requested_floor<<endl;
    return requested_floor;
}

char halt_lift(char status) {
    return 'H';
}

char un_halt_lift(char status) {
    return 'W';
}

int liftOperatingSystem(int requested_floor, int current_floor, char lift_status) {
    if (lift_status=='H') {
                       cout<<"Lift is halted. Cannot move."<<endl;
        return current_floor;
    }
    if (requested_floor > current_floor) {
                return liftup(current_floor, requested_floor);
		
		    } else if (requested_floor < current_floor) {
     return liftdown(current_floor, requested_floor);
              }
    return current_floor;
}

