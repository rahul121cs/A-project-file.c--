#include<iostream>
#include <fstream>
#include <cstring>
using namespace std;
bool  Islogin(){
	string username , password , un, pw; // username and password 
	cout<< " enter username"<<endl;
	cin>>username;
	cout <<" enter password" <<endl;
	cin>>password;
	
	ifstream read ("c\\" + username + ".txt");
	getline(read, un);
	getline(read,pw);
	
	if(un==username && pw == password){
		return true;
	}
	else {
		return false;
	}
}
int main (){
	int choice;
    int enter , exit;
	cout<<" 1: Register \n 2: Login\n your choice: ";
	cin>> choice;
    if (enter ==1) {
        
    }
	if( choice == 1){ 
		string username, password;
		
		cout<<"select a username:"<< endl;
		cin>>username;
		
		cout<<"select a password :" << endl;
		cin>>password;
		
		ofstream file;
		file.open("c\\" + username + ".txt");
		
		file<< " username :" << username << endl << " password : "<< password;
		file.close();
		
		main();
	}
	
	else if ( choice ==2){
		bool status = Islogin();
		
		if(status==Islogin()){
			cout<< " Successfully login:"<< endl;
			system ("Pause");
    
		}
		else {
			cout<<" invalid user name password   " << endl;
			system("Pause");
			return 1;
		}
	}	
	
	
	return 0;
}
