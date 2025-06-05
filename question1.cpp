//salman ahmed khan
//i243004
//section c











#include <iostream>
using namespace std;

int calculateLength(char s[]) {
    int length=0;
    for (int i=0; s[i]!='\0'; i++) {
        length++;
    }
    return length;
}

bool isSubstring(char main[], char sub[]) {
    int mainLen=calculateLength(main);
    int subLen=calculateLength(sub);

    for (int i=0; i<=mainLen-subLen; i++) {
        bool found=true;
        for (int j=0; j<subLen; j++) {
            if (main[i+j]!=sub[j]) {
                found=false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int substringPosition(char main[], char sub[]) {
    int mainLen=calculateLength(main);
    int subLen=calculateLength(sub);

    for (int i=0; i<=mainLen-subLen; i++) {
        bool found=true;
        for (int j=0; j<subLen; j++) {
            if (main[i+j]!=sub[j]) {
                found=false;
                break;
            }
        }
        if (found) return i;
    }
    return -1;
}

void readLine(char str[], int maxLength) {
    int i=0;
    char ch;
    while (i <maxLength -1 && cin.get(ch) && ch != '\n') {
        str[i++] = ch;
    }
    str[i] ='\0';
}
//ignore function
void customIgnore(int n= 1, char delim = '\n')
 { int count =0; char ch; 
 while (count < n && cin.get(ch)) 
 { if (ch ==delim) { break; } count++; } }
int main() {
    char mainStr[1000], subStr[1000];

    // Menu-driven program
    while (true) {
        cout << "\nMenu:\n1. Calculate Length of String\n2. Check Substring\n3. Find Substring Position\n4. Exit\n";
        int choice;
        cin >>choice;
        customIgnore();

        switch (choice) {
            case 1:
                cout<< "Enter the string: ";
                readLine(mainStr, 1000);
                cout<< "Length of the string: " <<calculateLength(mainStr)<< endl;
                break;
            case 2:
                cout<< "Enter the main string: ";
                readLine(mainStr, 1000);
                cout<< "Enter the substring: ";
                readLine(subStr, 1000);
                if (isSubstring(mainStr, subStr)) {
                    cout <<"The substring exists in the main string.\n";
                } else {
                    cout <<"The substring does not exist in the main string.\n";
                }
                break;
            case 3:
                cout<< "Enter the main string: ";
                readLine(mainStr, 1000);
                cout <<"Enter the substring: ";
                readLine(subStr, 1000);
                int position;
                position = substringPosition(mainStr, subStr);
                if (position!= -1) {
                    cout <<"The substring starts at index: " << position << endl;
                } else {
                    cout <<"The substring does not exist in the main string.\n";
                }
                break;
            case 4:
                cout <<"Exiting program.\n";
                return 0;
            default:
                cout <<"Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

