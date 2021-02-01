#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b;
	char repeat = 'y';
	while (repeat == 'y')
	{
		cout<<"I have a number between 1 and 1000."<<endl;
		cout<<"Can you guess my number?"<<endl;
		cout<<"Please type your first guess: ";
		cin>>a;
		b= rand()%1000 +1;
		if (a==b)
		cout<<"Excellent! You guessed the number!"<<endl;
		else if(a>b)
		cout<<"Too high, try again."<<endl;
		else if(a<b)
		cout<<"Too low, try again."<<endl;
		cout<<"Would you like to play again? (y or n): ";
		cin>>repeat;
	}
	system("pause");
	return 0;
}
