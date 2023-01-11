
#include <iostream>
#include <fstream> // ifstream (output/read) // ofstream (input/write)
#include <string>
#include <stdlib.h>
using namespace std;
void login(){
    system("CLS");
    string name;
    cout<<"enter your name ==> ";
    cin>> name;
    cout<<endl;
    int age;
    cout<<"enter your age ==> ";
    cin>> age;
    cout<<endl;
    cout<<name<<" "<<age;
	ofstream dataName;
	dataName.open("file.txt");
	dataName<<name<<endl;
	dataName<<age<<endl;
	dataName.close();
}
void showdata(){
	cout<<"nikmok karima";
}
	
	
int main(){
    cout<<"******************************************************************************"<<endl;
    cout<<"************************** LOGIN SIGN IN SYSTEM ******************************"<<endl;
    cout<<"******************************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"1. LOGIN"<<endl;
    cout<<"2. REGISTER"<<endl;
    cout<<"3. SHOW DATA"<<endl;
    cout<<"4. EXIT"<<endl;
    cout<<endl<<endl;
    cout<<"Enter Your Choise ";
    int choise;
    cin>>choise;
    switch(choise){
        case 1:
            cout<<"LOGIN ";
            login();
            break;
        case 2:
            cout<<"REGISTER";
            break;
        case 3:
            cout<<"YOUR data ";
			showdata();
            break;
        case 4:
            cout<<"EXIT for many taime";
            break;
        default:
            cout<<"Renter Number Choise";
            break;
    }
}






