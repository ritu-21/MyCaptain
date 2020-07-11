//C++ program to input age fron the user and check if the entered age is eligible for voting or not eligible.
#include<iostream>
using namespace std;
int main()
{
	cout << "VOTING ELIGIBILITY CHECKER \n";
	int c;
    do
    {
    	int age;
    	cout<<"Enter the age.\n";
    	cin>>age;
    	if(age>=18)
    	cout<<"You are aligible for voting\n";
    	else
    	cout<<"You are not eligible for voting\n";
    	cout<<"Enter your choice:"; // Enter 1  for continuing to check and 0 to stop
    	cin >> c;
    }
    while(c!=0);
}
