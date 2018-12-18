#include <iostream>
using namespace std;
#ifndef HEADER_H
#define HEADER_H
class Date
{
private:
	int Month, Day, Year;
public:
	void SetMonth()
	{
		cout << "Enter month!\n";
		cin >> Month;
		while (cin.fail() || Month < 0 || Month > 12)
		{
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter valid Value!\n";
			cin >> Month;
		}
	}
	void SetDay(Date date)
	{
		cout << "Enter Days!\n";
		cin >> Day;
		while (cin.fail() || Day < 0)
		{
			if (cin.fail())
			{
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter valid Value!\n";
			cin >> Day;
			}
			if (date.Month==1)//31
			{
				if (date.Day > 31)
				{
					cout << "January max days: 31\n";
					cin >> Day;
				}

			}
			else if (date.Month == 2)//28
			{
				if (date.Day > 28)
				{
					cout << "February max days: 28\n";
					cin >> Day;
				}
			}
			else if (date.Month == 3)//31
			{
				if (date.Day > 31)
				{
					cout << "March max days: 31\n";
					cin >> Day;
				}
			}
			else if (date.Month == 4)//30
			{
				if (date.Day > 30)
				{
					cout << "April max days: 30\n";
					cin >> Day;
				}
			}
			else if (date.Month == 5)//31
			{
				if (date.Day > 31)
				{
					cout << "May max days: 31\n";
					cin >> Day;
				}
			}
			else if (date.Month == 6)//30
			{
				if (date.Day > 30)
				{
					cout << "June max days: 30\n";
					cin >> Day;
				}
			}
			else if (date.Month == 7)//31
			{
				if (date.Day > 31)
				{
					cout << "July max days: 31\n";
					cin >> Day;
				}
			}
			else if (date.Month == 8)//31
			{
				if (date.Day > 31)
				{
					cout << "August max days: 31\n";
					cin >> Day;
				}
			}
			else if (date.Month == 9)//30
			{
				if (date.Day > 30)
				{
					cout << "September max days: 30\n";
					cin >> Day;
				}
			}
			else if (date.Month == 10)//31
			{
				if (date.Day > 31)
				{
					cout << "October max days: 31\n";
					cin >> Day;
				}
			}
			else if (date.Month == 11)//30
			{
				if (date.Day > 30)
				{
					cout << "November max days: 30\n";
					cin >> Day;
				}
			}
			else if(date.Month == 12)//31
			{
				if (date.Day > 31)
				{
					cout << "December max days: 31\n";
					cin >> Day;
				}
			}
		}
	}
	void SetYear()
	{
		cout << "Enter Year!\n";
		cin >> Year;
		while (cin.fail() || Year < 0 )
		{
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter valid Value!\n";
			cin >> Year;
		}
	}
	void DisplayDate()
	{
		cout << Month << "-" << Day << "-" << Year << endl;
	}
	void CompareDates(Date date1, Date date2)
	{
		if (date1.Year < date2.Year)
		{
			date1.DisplayDate(); 
			cout << " happened before \n";
			date2.DisplayDate();
			cout << endl;
		}
		else if (date1.Year > date2.Year)
		{
			date1.DisplayDate();
			cout << " happened after \n";
			date2.DisplayDate();
			cout << endl;
		}
		else if (date1.Year == date2.Year)
		{
			if (date1.Month < date2.Month)
			{
				date1.DisplayDate();
				cout << " happened before \n";
				date2.DisplayDate();
				cout << endl;
			}
			else if (date1.Month > date2.Month)
			{
				date1.DisplayDate();
				cout << " happened after \n";
				date2.DisplayDate();
				cout<< endl;
			}
			else if(date1.Month == date2.Month)
			{
				if (date1.Day < date2.Day)
				{
					date1.DisplayDate();
					cout << " happened before \n";
					date2.DisplayDate();
					cout << endl;
				}
				else if (date1.Day > date2.Day)
				{
					date1.DisplayDate();
					cout << " happened after \n";
					date2.DisplayDate();
					cout<< endl;
				}
				else if (date1.Day == date2.Day)
				{
					date1.DisplayDate();
					cout << " and \n";
					date2.DisplayDate();
					cout << "are the same date!\n";
				}
			}
		}
	}

};
#endif
