#include<bits/stdc++.h>
using namespace std;

int main()
{


	int marks[] = { 25, 65, 46, 98, 78, 65 };
	
	int len = sizeof(marks) / sizeof(marks[0]); 
	int max_marks = len * 100;

	
	int total = 0;

	
	char grade = 'F';

	
	for (int i = 0; i < len; i++) 
	{
		total += marks[i];
	}


	double percentage = ((double)(total) / max_marks) * 100;

	if (percentage >= 90) 
	{
		grade = 'A';
	}
	else
	{
		if (percentage >= 80 && percentage <= 89) 
		{
			grade = 'B';
		}
		else
		{
			if (percentage >= 60 && percentage <= 79) 
			{
				grade = 'C';
			}
			else
			{
				if (percentage >= 33 && percentage <= 59)
				{
					grade = 'D';
				}
				else
				{
					grade = 'F';
				}
			}
		}
	}
	cout << (grade) << endl;;
}



