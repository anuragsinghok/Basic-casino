//*******************CASINO PLAY*************************//
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"*******************Welcome to the BANG CASINO********************"<<endl;
    char name[20];
    cout<<"Enter your name please -  \n";
    fgets(name, sizeof(name), stdin); //gets-- ek prgra hota jb name lena hota hai space ke sath 
    cout<<"Your name is  "<<name<<endl;//u can use puts to print the name also
    int money,age,number;
    cout<<"Enter your age for verification : \n";
    cin>>age;
    //Age varification system

    if (age>18)
    {
        cout<<"You are eligible for this please continue :      "<<endl;

    cout<<"Enter the amount of money to play :  \n ";
    cin>>money;
    cout<<"Your details are :   "<<endl<<name<<age<<endl<<money<<endl;
    //*************inputs  are done here****************//


   srand(time(0));
    int computer = rand()%10 + 1; //random variable generater upto 10 code 
    // cout <<computer<<endl;

    cout<<"Choose your lucky number (form 1 to 10) :  \n";
    cin>>number;
    cout<<"You choose  "<<number<<endl;
    if (number== computer )
    {
        cout<<"Congratulations"<<endl<<"You won "<<endl;

        cout<<money*2<<endl;
        
        cout<<"Here is your price money";

    }
    else
    {
        cout<<"You loose"<<endl<<"better luck next time"<<endl;
    }

    }
    else
    {
        cout<<"***********Sorry but you can't continue************** "<<endl;
    }
    
      cout<<"******************Thank you for coming ********************";
    
    
    return 0 ;
}