/*
	1. Inheritance 
			Person
		Candidate Voter
	2. Run Time polymorphism 
	
*/
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class person
{
	protected:
		string name;
		long adharno;
		string phno;
		int age;
		string city,gender;
	public:	
};
class Candidate : public person
{
	protected:
		static int vote;
	public:
};
class Voter : public person
{
	protected:
		int status;
		long voterid;
	public:
};
void candidate()
{
	int choice;
	do
	{
		cout << "\n---Menu---\n";
		cout << "1. Add Candidate" << endl;
		cout << "2. Remove Candidate" << endl;
		cout << "3. See the Results " << endl;
		cout << "4. Search Candidate" << endl;
		cout << "5. Update Candidate Details" << endl;
		cout << "6. Display Details of All candidates" << endl;
		cout << "7. Insert Voter details" << endl;
		cout << "8. Update voter details" << endl;
		cout << "9. Delete Voter records" << endl;
		cout << "10. Search Voter Details" << endl;
		cout << "11. Exit" << endl;
		cout << "Enter choice : ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				cout << "Exiting from the Candidate Menu";
				break;
			default:
				cout << "Invalid choice..." << endl;
				break;
		}
	}while(choice != 11);
}
void voter()
{
	//Vote function write to here
}
int main()
{
	int choice;
	do
	{
		cout << "\n-----Options-----\n";
		cout << "1. Candidate" << endl;
		cout << "2. Voter" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter choice : ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				candidate();
				break;
			case 2:
				voter();
				break;
			case 3:
				cout << "Exiting from the loop..." << endl;
				break;
			default:
				cout << "Invalid choice..." << endl;
				cout << "Try again..." << endl;
				break;
		}
	}while(choice != 3);	
	return 0;
}
