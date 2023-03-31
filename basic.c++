#include <iostream>
#include <fstream> // ifstream (output/read) // ofstream (input/write)
#include <string>
#include <stdlib.h>
using namespace std;
void SignIn(){
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
void Menu(){
    int number;
    cout<<"******************************************************************************"<<endl;
    cout<<"*****************************  Question/Answer *******************************"<<endl;
    cout<<"******************************************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1- print question to me "<<endl;
    cout<<"2- print qustion from me "<<endl;
    cout<<"3- answer question "<<endl;
    cout<<"4- delete question "<<endl;
    cout<<"5- ask question "<<endl;
    cout<<"6- list system user "<<endl;
    cout<<"7- feed "<<endl;
    cout<<"8- logout "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"enter number from [1--8]";
    cin>>number;

    switch(number){
        case 1:
            cout<<"aaaa";
            break;
        case 2:
            cout<<"bbbb";
            break;
        case 3:
            cout<<"cccc";
            break;
        case 4:
            cout<<"dddd";
            break;
        case 5:
            cout<<"eeee";
            break;
        case 6:
            cout<<"ffff";
            break;
        case 7:
            cout<<"gggg";
            break;
        case 9:
            cout<<"hhhh";
            break;
        default:
            cout<<"404 --- please enter number from 1 to 8"<<endl;
            cout<<endl:
            cout<<endl:
            cout<<endl:
            Menu();
            break;
    }
}
void Login(){
    string id, nm; 
    int exist, pass, ps;
    cout<<"Enter Name ";
    cin>>id;
    cout<<endl;

    cout<<"Enter Password "<<endl;
    cin>>pass;
    cout<<endl;

    // ifstream myfile("file.txt");
    // while(myfile>>nm>>ps){
    //     if(id == nm && pass == ps){
    //         exist = 1;
    //     }
    // }
    // myfile.close();
    // if(exist == 1){
    //     cout<<"You"<<id<<" Rigested successfully";
    // }
    // else{
    //     cout<<"Sorry Login Error";
    // }
}
// void data(){
//     // create object file
//     fstream myfile;
//     // open object file and read it 
//     myfile.open("file.txt", ios::in);
//     // check is open or not
//     if(myfile.is_open()){
//         // any line stok as variable
//         string line;
//         while(getline(myfile, line)){
//             cout<<line<<endl;
//         }
//         myfile.close();
//     }   
// }
int main(){
    system("CLS");
    cout<<"******************************************************************************"<<endl;
    cout<<"*****************************  Question/Answer *******************************"<<endl;
    cout<<"******************************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"1. SignIn"<<endl;
    cout<<"2. LOGIN"<<endl;
    
  
    cout<<endl<<endl;
    cout<<"Enter Your Number in Rang [1 - 2] ";
    int choise;
    cin>>choise;
    switch(choise){
        case 1:
            SignIn();
            break;
            main();
        case 2:
            Login();
            Menu();

            break;
        default:
            cout<<"Sorry Renter Number Choise";
            break;
    }
}