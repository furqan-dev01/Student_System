#include<iostream>
using namespace std;
int main()
{
	int rollnumber[100] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
	int clas[100] = { 1, 2, 3, 4, 8, 7, 5, 6, 9, 10, 1, 2, 3, 4, 8, 7, 5, 6, 9, 10, 1, 2, 3, 4, 8, 7, 5, 6, 9, 10, 1, 2, 3, 4, 8, 7, 5, 6, 9, 10, 1, 2, 3, 4, 8, 7, 5, 6, 9, 10 };
	int midterm[100] = { 22, 23, 25, 50, 44, 42, 32, 26, 46, 49, 22, 23, 25, 50, 44, 42, 32, 26, 46, 49, 22, 23, 25, 50, 44, 42, 32, 26, 46, 49, 22, 23, 25, 50, 44, 42, 32, 26, 46, 49, 22, 23, 25, 50, 44, 42, 32, 26, 46, 49 };
	int finalterm[100] = { 52, 60, 98, 58, 63, 65, 75, 85, 82, 95, 52, 90, 98, 58, 63, 65, 75, 85, 82, 95, 52, 60, 98, 58, 63, 65, 75, 85, 82, 95, 52, 70, 98, 58, 63, 65, 75, 85, 82, 95, 52, 80, 98, 58, 63, 65, 75, 85, 82, 95 };
	int presskey;
	char grade[100];
	int temp, c = 0;
	int addnumber, adddata = 0;
	int deletenumber, deletedata = 0;
	int x;
	char a;
	cout << "If you want break the program than press -1" << endl;
	cout << "Press any key that you want:" << endl;
	cout << "Press 0: show menu::" << endl;
	cout << "Press 1: Sort and display all the records roll number wise in ascending order. " << endl;
	cout << "Press 2: Sort and display all the records roll number wise in descending order. " << endl;
	cout << "Press 3: Sort and display all records in ascending order based on marks in Midterm " << endl;
	cout << "Press 4: Sort and display all records in descending order based on marks in Midterm" << endl;
	cout << "Press 5: Sort and display all records in ascending order based on marks in Final " << endl;
	cout << "Press 6: Sort and display all records in descending order based on marks in Final" << endl;
	cout << "Press 7: Sort and display all records in ascending order based on Grade" << endl;
	cout << "Press 8: Sort and display all records in descending order based on Grade" << endl;
	cout << "Press 9: Add a new entry of a student. " << endl;
	cout << "Press 10: Delete a student record based on his roll number. " << endl;
	cout << "Press 11 Display record of all the students greater than X marks in final exam (in descending order) " << endl;
	cout << "Press 12:Display record of all the students greater than X marks in final exam (in ascending order" << endl;
	cout << "Press 13:Display record of all the students less than or equal to X marks in final exam (in descending order " << endl;
	cout << "Press 14:Display record of all the students less than or equal to X marks in final exam (in ascending order " << endl;
	cout << "Press 15:Display record of all the students greater than X grade (in descending order with respect to grade). " << endl;
	cout << "Press 16:Display record of all the students greater than X grade (in ascending order with respect to grade).  " << endl;
	cout << "Press 17: Display record of all the students less than or equal to X grade (in descending order with respect to grade). ";
	cout << "Press 18:Display record of all the students less than or equal to X grade (in ascending order with respect to grade). " << endl;
	for (int i = 0; i < 50; i++)
	{
		if (finalterm[i] > 86)
		{
			grade[i] = 'A';
		}
		else if (finalterm[i] >= 73 && finalterm[i] <= 86)
		{
			grade[i] = 'B';
		}
		else if (finalterm[i] >= 60 && finalterm[i] <= 72)
		{
			grade[i] = 'C';
		}
		else if (finalterm[i] >= 50 && finalterm[i] <= 59)
		{
			grade[i] = 'D';
		}
		else
		{
			grade[i] = 'F';
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		cout << "Press any key::" << endl;
		cin >> presskey;
		if (presskey == -1)
		{
			break;
		}
		else if (presskey == 0)
		{
			cout << "                 MENU                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//------------------------------------------------------------------------------------------------------
		else if (presskey == 1)
		{
			cout << "                 Accending order according to rollnumber                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (rollnumber[i] > rollnumber[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//---------------------------------------------------------------------
		else if (presskey == 2)
		{
			cout << "                 Decending order according to rollnumber                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (rollnumber[i] < rollnumber[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//------------------------------------------------------------------------------------
		else if (presskey == 3)
		{
			cout << "                 Accending order according to midterm marks                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (midterm[i] > midterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//------------------------------------------------------------------
		else if (presskey == 4)
		{
			cout << "                 Decending order according to midterm marks                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (midterm[i] < midterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//-----------------------------------------------------------------
		else if (presskey == 5)
		{
			cout << "                 Accending order according to finalterm marks                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (finalterm[i] > finalterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//---------------------------------------------------------------------------
		else if (presskey == 6)
		{
			cout << "                 Decending order according to finalterm marks                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (finalterm[i] < finalterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//------------------------------------------------------------------------------------
		else if (presskey == 7)
		{
			cout << "                 Accending order according to grade marks                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (grade[i] < grade[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//-------------------------------------------------------------------------------------
		else if (presskey == 8)
		{
			cout << "                 Decending order according to grade marks                      " << endl;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (grade[i] > grade[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//----------------------------------------------------------------------------------------
		else if (presskey == 9)
		{
			int j;
			cout << "                 add another data                      " << endl;
			for (int i = 50; i < 100; i++)
			{
				cout << "If you want add another student data then press 1:" << endl;
				cin >> addnumber;
				if (addnumber == 1)
				{
					for (int i = 50; i < 100; i++)
					{
						cout << "Enter student data :" << endl;
						cout << "Rollnumber:";
						cin >> rollnumber[i];
						for (j = 0; j < 50 + adddata; j++)
						{
							if (rollnumber[i] == rollnumber[j])
							{
								cout << "You do not enter unique number :" << endl;
								c++;
								break;
							}
						}
						if (c == 0)
						{
							cout << "Enter midterm marks:";
							cin >> midterm[i];
							cout << "Enter finalterm marks:";
							cin >> finalterm[i];
							cout << "Enter class :";
							cin >> clas[i];
							if (finalterm[i] > 86)
							{
								grade[i] = 'A';
							}
							else if (finalterm[i] >= 73 && finalterm[i] <= 86)
							{
								grade[i] = 'B';
							}
							else if (finalterm[i] >= 60 && finalterm[i] <= 72)
							{
								grade[i] = 'C';
							}
							else if (finalterm[i] >= 50 && finalterm[i] <= 59)
							{
								grade[i] = 'D';
							}
							else
							{
								grade[i] = 'F';
							}
							adddata++;
							cout << "Grade:" << grade[i] << endl;
							c = 0;
						}
						break;
					}
				}
				else
				{
					break;
				}
			}
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;

			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
			}
		}
		//-----------------------------------------------------------------------------------------
		else if (presskey == 10)
		{
			for (int i = 0; i < 50 + adddata; i++)
			{
				cout << "Which roll that you want to delete than press -1:" << endl;
				cin >> deletenumber;
				if (deletenumber != -1)
				{
					break;
				}
				else
				{
					cout << "Enter rollnumber that you want to delete::" << endl;
					cin >> deletedata;
					if (rollnumber[i] != deletedata)
					{
						cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;

						for (int i = 0; i < 50 + adddata; i++)
						{
							if (rollnumber[i] != deletedata)
								cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
						}
					}
				}
			}
		}
		//------------------------------------------------------------------------
		else if (presskey == 11)
		{
			cout << "Display record of all the students greater than X marks in final exam:" << endl;
			cout << "Enter the value of X::";
			cin >> x;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (finalterm[i] < finalterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (finalterm[i] > x && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		else if (presskey == 12)
		{
			cout << "Display record of all the students greater than X marks in final exam:" << endl;
			cout << "Enter the value of X::";
			cin >> x;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (finalterm[i] > finalterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (finalterm[i] > x && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		else if (presskey == 13)
		{
			cout << "Display record of all the students less than or equal to X marks in final exam:" << endl;
			cout << "Enter the value of X::";
			cin >> x;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (finalterm[i] > finalterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (finalterm[i] <= x && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		//----------------------------------------------------------------------------------------------
		else if (presskey == 14)
		{
			cout << "Display record of all the students less than or equal to X marks in final exam:" << endl;
			cout << "Enter the value of X::";
			cin >> x;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (finalterm[i] < finalterm[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (finalterm[i] <= x && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		//-------------------------------------------------------------------------------------
		else if (presskey == 15)
		{
			cout << "Display record of all the students greater than X grade:" << endl;
			cout << "Enter the value of X in chacter::";
			cin >> a;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (grade[i] > grade[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (grade[i] > a && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		else if (presskey == 16)
		{
			cout << "Display record of all the students greater than X grade:" << endl;
			cout << "Enter the value of X in chacter::";
			cin >> a;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (grade[i] < grade[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (grade[i] > a && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		else if (presskey == 17)
		{
			cout << "Display record of all the students less than or equal to X grade :" << endl;
			cout << "Enter the value of X in chacter::";
			cin >> a;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i < 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (grade[i] > grade[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (grade[i] <= a && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
		else if (presskey == 18)
		{
			cout << "Display record of all the students less than or equal to X grade :" << endl;
			cout << "Enter the value of X in chacter::";
			cin >> a;
			cout << " | Roll number:" << " | " << "Midterm marks " << " |" << "Finalterm marks: |" << "Grade:" << " | " << endl;
			for (int i = 0; i >= 50 + adddata; i++)
			{
				for (int j = i + 1; j < 50 + adddata; j++)
				{
					if (grade[i] > grade[j])
					{
						temp = rollnumber[i];
						rollnumber[i] = rollnumber[j];
						rollnumber[j] = temp;
						temp = midterm[i];
						midterm[i] = midterm[j];
						midterm[j] = temp;
						temp = finalterm[i];
						finalterm[i] = finalterm[j];
						finalterm[j] = temp;
						temp = grade[i];
						grade[i] = grade[j];
						grade[j] = temp;
					}
				}
			}
			for (int i = 0; i < 50 + adddata; i++)
			{
				if (grade[i] <= a && rollnumber[i] != deletedata)
				{
					cout << " | " << rollnumber[i] << "           |        " << midterm[i] << "      |       " << finalterm[i] << "        |  " << grade[i] << "    |" << endl;
				}
			}
		}
	}
}