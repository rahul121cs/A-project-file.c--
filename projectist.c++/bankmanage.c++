#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

class Bank
{
public:
  string name;
  int id_num;
  float balance[10];
  vector<float> pan_card;
  Bank()
  {
    cout << " Enter Your Name \n";
    cin >> name;
    cout << " Enter Your id_num\n";
    cin >> id_num;
    cout << "enter pan_card number \n";
    // if ( pan_card[10] ==10){
    cin >> pan_card[10];
    // }
  }
  bool Islogin()
  {
    string username, password, un, pw; // username and password
    cout << " enter username" << endl;
    cin >> username;
    cout << " enter password" << endl;
    cin >> password;

    ifstream read("c\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);
  }
};
int main()
{
  int choice, enter;
  cout << " 1: New Account open \n 2: Check account detail's press  you want to know information \n your choice: ";
  cin >> choice;
  if (choice == 1)
  {
    Bank costumber; // call constructor

    string username, password;
    // cout<<"select a username:"<< endl;
    // cin>>username;
    // cout<<"select a password :" << endl;
    // cin>>password;
    ofstream file("c\\" + username + ".txt");
    file << " username :" << username << endl
         << " password : " << password;
    file.close();

    main();
  }

  return 0;
}