Assigment: Ch9 page 499 #1
Due Date: 12-3-18
Description: Write a program using class DATE to set the date for month, day and year.
*/
#include "Header.h"

void main()
{
	
	Date date1, date2;
	date1.SetMonth();
	date1.SetDay(date1);
	date1.SetYear();
	date2.SetMonth();
	date2.SetDay(date2);
	date2.SetYear();
	date1.DisplayDate();
	date2.DisplayDate();
	date1.CompareDates(date1, date2);
	
}
