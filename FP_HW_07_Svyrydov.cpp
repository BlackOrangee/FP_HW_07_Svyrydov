#include <iostream>
using namespace std;

int main()		// Task 1. The user enters a character from the keyboard.
				// Determine which symbol it is: a letter, a number, a punctuation mark, or something else.
{
  
	char symb;

	cout << "\n\tEnter the symbol to determine what kind is it: "; cin >> symb;		// Input data

	// Determinating symbols by UTF code

	if ((symb >= 48) && (symb <= 57)) {		// Numbers

		cout << "\n\n\tYou entered the number\n\n\n";

	}
	else if ((symb >= 58) && (symb <= 64)) {	// : ; < = > ? @

		cout << "\n\n\tYou entered the somesing like this\n\n\t \: \; \< \= \> \? \@ \n\n\n";

	}
	else if ((symb >= 91) && (symb <= 96)) {    //  [ \ ] ^ _ `

		cout << "\n\n\tYou entered the somesing like this\n\n\t \[ \\ \] \^ \_ \' \n\n\n";

	}
	else if ((symb >= 65) && (symb <= 90)) {  // A - Z

		cout << "\n\n\tYou entered the capital letter\n\n\n";

	}
	else if ((symb >= 97) && (symb <= 122)) { // a - z

		cout << "\n\n\tYou entered the small letter\n\n\n";

	}
	else if ((symb >= 123) && (symb <= 127)) { // { | } ~

		cout << "\n\n\tYou entered the somesing like this\n\n\t \{ \| \} \~\n\n\n";

	}
	else // If input symbol out of range
	{
		cout << "\n\n\tYou entered the something else what program cant read\n\tThis program work only with latin symbols\n\n\n";
	}
}





#include <iostream>
using namespace std;

int main()		// Task 2. Write a program for calculating the cost of a call for different mobile operators.
				// The user enters the cost of the call and chooses which operator he calls from.
				// Display the value on the screen.
{
	string op_1, op_2;

	cout << "\n\tEnter the operators names through a space\n\n\t";		// Names input
	
	cin >> op_1 >> op_2;

	double op_1_in_price, op_2_in_price;
	double op_1_out_price, op_2_out_price;

	cout << "\n\tEnter price per minut for internal calls for " << op_1 <<": ";	cin >> op_1_in_price;		// Prices input
	cout << "\tEnter price per minut for external calls for " << op_1 << ": ";	cin >> op_1_out_price;
	cout << "\tEnter price per minut for internal calls for " << op_2 << ": ";	cin >> op_2_in_price;
	cout << "\tEnter price per minut for external calls for " << op_2 << ": ";	cin >> op_2_out_price;

	int choice;

	cout << "\n\n\tChoose the direction of the call\n\n\t";		// Choosing direction
	cout << "From " << op_1 << " to " << op_1 << " press 1\n\t";
	cout << "From " << op_1 << " to " << op_2 << " press 2\n\t";
	cout << "From " << op_2 << " to " << op_2 << " press 3\n\t";
	cout << "From " << op_2 << " to " << op_1 << " press 4\n\n\t";

	cin >> choice;

	double hour, min, sec;

	cout << "\n\tHow much you speak?\n\n\tHours: "; cin >> hour;	// input time
	cout << "\tMinutes: "; cin >> min;
	cout << "\tSeconds: "; cin >> sec;

	double call_price, time;

	time = hour * 120 + min * 60 + sec;

	switch (choice)		// Calculation of the cost depending on the choice
	{
	case 1:

		call_price = (op_1_in_price / 60.0) * time;


		break;
	case 2:

		call_price = (op_1_out_price / 60.0) * time;


		break;
	case 3:

		call_price = (op_2_in_price / 60.0) * time;


		break;
	case 4:

		call_price = (op_2_out_price / 60.0) * time;


		break;

	default:
		break;
	}

	cout << "\n\n\t You spend: " << call_price << " (UAH)\n\n\n";		// Cost output
}






/*
		Task 3. 
		Vasya works as a programmer and receives $50 for every 100 lines of code.Vasya is fined $20 for every third lateness.Implement the menu :
		-the user enters the desired Vasya incomeand the number of delays, calculate how many lines of code he needs to write;
		-the user enters the number of lines of code written by Vasya and the desired amount of salary.Count how many times Vasya can be late;
		-the user enters the number of lines of code and the number of delays, to determine how much money will be paid to youand whether they will be paid at all.
*/

#include <iostream>
using namespace std;

int main()
{
	double salary = 0.5, lines, wanted_salary;
	int late, menu;

	cout << "\n\t\tWelcome to LLS (Lines Lates Salary) calculator";
	cout << "\n\n\tEnter the desired Salary and number of Lates to calculate how many Lines of code needs to write\t\t1";
	cout << "\n\tEnter the number of Lines of written code and the desired Salary to calculate how many Lates can be\t2";
	cout << "\n\tEnter the number of Lines of written code and the number of Lates, to calculate Salary\t\t\t3";
	cout << "\n\n\t";	cin >> menu;	// Choose to swich

	switch (menu)
	{
	case 1:	// Salary Lates => Lines

		cout << "\n\tEnter Desired Salary and and number of Lates (through a space)\n\n\t";		cin >> wanted_salary >> late;

		lines = wanted_salary / salary - (late / 3) * 20;


		cout << "\n\t" << lines << " Lines need to write\n\n\n";

		break;

	case 2:	// Lines Salary => Lates

		cout << "\n\tEnter the number of Lines of written code and the Desired Salary (through a space)\n\n\t";		cin >> lines >> wanted_salary;

		salary *= lines;
		
		int dif;

		dif = salary - wanted_salary;

		late = (dif / 20) / 3;
		//unsigned int Late;
		//Late = late;

		cout << "\n\t" << late << " Lates can be\n\n\n";

		break;

	case 3:	// Lines Late => Salary


		cout << "\n\tEnter the number of Lines of written code and the number of Lates (through a space)\n\n\t";   	 cin >> lines >> late;


		salary = salary * lines - (late / 3) * 20;

		cout << "\n\t" << salary << " (USD) is Your saalary\n\n\n";

		break;

	default: // Error

		cout << "\n\tError\n\n\tIncorect choose";

		break;
	}
}




#include <iostream>
using namespace std;

int main()		// Task 4.
				// Write a program that tests knowledge of the multiplication table.
				// The program displays two numbers to the userand asks for their product.
				// After that, it should checkand reply to the user.
				// The program uses the random function to select numbers from 1 to 9.
{
	int num_1, num_2, answer, correct_answer;

	cout << "\n\n\tMultiplication table test\n\n\t";

	srand(time(NULL));
	num_1 = rand() % 9 + 1;
	num_2 = rand() % 9 + 1;

	cout << num_1 << " x " << num_2 << " = "; cin >> answer;

	correct_answer = num_1 * num_2;

	if (correct_answer == answer) {

		cout << "\n\n\tRight!\n\n\n";
	}
	else
	{
		cout << "\n\n\tWrong\n\n\t";
		cout << num_1 << " x " << num_2 << " = " << correct_answer;
		cout << "\n\n\n";
	}



		//int num_1, num_2, answer, correct_answer, menu;
		//int min, max, in_1, in_2;

		//cout << "\n\n\tMultiplication table test\n\n\t1 -- Standart mode\n\t2 -- Custom\n\n\t"; cin >> menu;

		//switch (menu)
		//{
		//case 1:
		//	srand(time(NULL));
		//	num_1 = rand() % 9 + 1;
		//	num_2 = rand() % 9 + 1;

		//	cout << num_1 << " x " << num_2 << " = "; cin >> answer;

		//	correct_answer = num_1 * num_2;

		//	if (correct_answer == answer) {

		//		cout << "\n\n\tRight!\n\n\n";

		//	}
		//	else
		//	{
		//		cout << "\n\n\tWrong\n\n\t";
		//		cout << num_1 << " x " << num_2 << " = " << correct_answer;
		//		cout << "\n\n\n";
		//	}
		//	break;

		//case 2:
		//	cout << "\n\n\tEnter the numbers diapasone\n\n\t";	cin >> in_1 >> in_2;

		//	if (in_1 > in_2) {

		//		in_1 = max;
		//		in_2 = min;
		//	}
		//	else
		//	{
		//		in_1 = min;
		//		in_2 = max;
		//	}
		//	srand(time(NULL));
		//	num_1 = rand() % max + min;
		//	num_2 = rand() % max + min;

		//	cout << num_1 << " x " << num_2 << " = "; cin >> answer;

		//	correct_answer = num_1 * num_2;

		//	if (correct_answer == answer) {

		//		cout << "\n\n\tRight!\n\n\n";

		//	}
		//	else
		//	{
		//		cout << "\n\n\tWrong\n\n\t";
		//		cout << num_1 << " x " << num_2 << " = " << correct_answer;
		//		cout << "\n\n\n";
		//	}
		//	break;
		//default:
		// 
		//	cout << "\n\tError\n\n\tIncorect choose";
		//	break;
		//}

}







