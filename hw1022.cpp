#include<iostream>
using namespace std;

int main()
{
	
	//#1
	char grade;
	cout<<"Enter your midterm grade: ";
	cin>>grade;

	switch(grade)
	{
		case'A':
			cout<<"Excellent.\n\n";
			break;
		case'B':
			cout<<"Very good.\n\n";
			break;
		case'C':
        	cout<<"Passing.\n\n";
			break;    //#4 �h��break;
    /*#3
		case'C':
        	cout<<"Passing.\n\n";
			break;   */
		case'D':
		case'F':
			cout<<"Not good.Go study.\n\n";
			break;
		default:
			cout<<"This is not a possible grade.\n\n";
	}
	
	//#2
	enum Seasons{SPRING = 1,SUMMER,AUYUMN,WINTER};
	int birth_season;
	cout<<"Enter your season of birth (1 for spring,2 for summer,etc): ";
	cin>>birth_season;
	cout<<endl<<endl;
	
	switch(birth_season)
	{
	
		case 1:
			cout<<"�@�@�������K���ѡ��͡��顸�����A���G \n\n"
				<<"�� ������������������ ������������������ \n"
				<<"�z�w�����~���{�~���{�~���{�~���{���~�w�{ \n"
				<<"�x�z���������������������������������{�x \n"
				<<"���������|�����|�����|�����|������������ \n"
				<<"�� ������������������ ������������������ \n";
			break;
		case 2:
			cout<<"�@�@�������L���ѡ��͡��顸�����A���G \n\n"
				<<"�� ������������������ ������������������ \n"
				<<"�z�w�����~���{�~���{�~���{�~���{���~�w�{ \n"
				<<"�x�z���������������������������������{�x \n"
				<<"���������|�����|�����|�����|������������ \n"
				<<"�� ������������������ ������������������ \n";
			break;
		case 3:
			cout<<"�@�@��������ѡ��͡��顸�����A���G \n\n"
				<<"�� ������������������ ������������������ \n"
				<<"�z�w�����~���{�~���{�~���{�~���{���~�w�{ \n"
				<<"�x�z���������������������������������{�x \n"
				<<"���������|�����|�����|�����|������������ \n"
				<<"�� ������������������ ������������������ \n";
			break;
		case 4:
			cout<<"�@�@�������V���ѡ��͡��顸�����A���G \n\n"
				<<"�� ������������������ ������������������ \n"
				<<"�z�w�����~���{�~���{�~���{�~���{���~�w�{ \n"
				<<"�x�z���������������������������������{�x \n"
				<<"���������|�����|�����|�����|������������ \n"
				<<"�� ������������������ ������������������ \n";
			break;
		default:
			cout<<"Error! Please try again!\n";
	}
	cout<<endl<<endl;
	
	
	//#5
	int number=22;
	{
		int number=42;
		cout<<number<<endl;
	}
	cout<<number<<endl<<endl;
	

	//#6

	int x=1;
	cout<<x<<endl;
	{
		cout<<x<<endl;
		int x=2;
		cout<<x<<endl;
		{
			cout<<x<<endl;
			int x=3;
			cout<<x<<endl;
		}
		cout<<x<<endl;
	}
	cout<<x<<endl<<endl;


	system("pause");
	return 0;
}