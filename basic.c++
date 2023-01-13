#include <iostream>
#include <fstream> // ifstream (output/read) // ofstream (input/write)
#include <string>
#include <stdlib.h>
using namespace std;
void Register(){
    system("CLS");
    string name;
    cout<<"enter your name ==> ";
    cin>> name;
    cout<<endl;
    int password;
    cout<<"enter your password ==> ";
    cin>> password;
    cout<<endl;
    cout<<name<<" "<<password;
	ofstream dataName;
	dataName.open("file.txt");
	dataName<<name<<endl;
	dataName<<password<<endl;
	dataName.close();
}
void Login(){
    string id, nm; 
    int exist, pass, ps;
    cout<<"Enter Name ";
    cin>>id;
    cout<<"Enter Password ";
    cin>>pass;
    ifstream myfile("file.txt");
    while(myfile>>nm>>ps){
        if(id == nm && pass == ps){
            exist = 1;
        }
    }
    myfile.close();
    if(exist == 1){
        cout<<"You"<<id<<" Rigested successfully";
    }
    else{
        cout<<"Sorry Login Error";
    }
}
void data(){
    // create object file
    fstream myfile;
    // open object file and read it 
    myfile.open("file.txt", ios::in);
    // check is open or not
    if(myfile.is_open()){
        // any line stok as variable
        string line;
        while(getline(myfile, line)){
            cout<<line<<endl;
        }
        myfile.close();
    }   
}
int main(){
    system("CLS");
    cout<<"******************************************************************************"<<endl;
    cout<<"************************** LOGIN/SIGN IN SYSTEM ******************************"<<endl;
    cout<<"******************************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"1. REGISTER"<<endl;
    cout<<"2. LOGIN"<<endl;
    cout<<"3. SHOW DATA"<<endl;
    cout<<"4. EXIT"<<endl;
    cout<<endl<<endl;
    cout<<"Enter Your Choise ";
    int choise;
    cin>>choise;
    switch(choise){
        case 1:
            Register();
            break;
            main();

            
        case 2:
            Login();
            break;
        case 3:
            data();
            break;
        case 4:
            cout<<"EXIT for many taime";
            break;
        default:
            cout<<"Renter Number Choise";
            break;
    }
}