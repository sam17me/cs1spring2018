
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*
#include<iostream>
#include<On Tuesday afternoons, Lightening Lanes Bowling Alley runs a special class to teach children to bowl.
Each lane has an instructor who works with a team of four student bowlers and instructs them as they bowl three 
lines (games). 
The management of Lightening Lanes has asked you to develop a program that will report each student’s 3-game 
average score and compare it to the average score they bowled the previous week. In this way, the students can 
see how much they are improving. The program will utilize looping structures and data validation techniques learned 
in class.

Input :

	Input should come from the keyboard,using suitable prompts.
	First the team names hould be entered.
	Then, for each of the four students on the team,
	
	the program should input their name, 
	their previous week’s average score, and 
	their score from each of today’s games.
	The score for each game must be between 0 and 300.Output :

	Output should be written to a file.
	It should be in the form of a report that lists
	the team name, each student’s name, 
	their 3 - game average from last week, and
	their 3 - game average from today.

	Program Design

	General Pseudocode : The following general pseudocode lists the steps the program must carry out.
	Open the output file Input the team name Print report heading which includes team name For each of
	the 4 students Input the student’s name Input and validate their last week’s bowling average  Input, 
	validate, and add up each of their game scores from to day Print student name, last week’s average 
	and today’s calculated average End for Close the file>
	*/

void display(struct bowlclass *st);
struct bowlclass
{
	string team;
	string student;
	int week;
	int game;
	int score;
	int avg;
	

};

int main(){
	struct bowlclass bowlers[2];
	
	bowlers[0] = { "Dragons","Aaron",1,1,250,0  };
	bowlers[0] = { "Dragons","Aaron", 1,2, 300,0 };
	bowlers[0] = { "Dragons","Aaron", 1,3, 288,0 };
	// create  a pointer to the struct
	struct bowlclass *r;
	r = &bowlers[2];

	// call the display function and pass the r[2] pointer
	display( r);
	system("pause");
} // end main`


void display(struct bowlclass *data[2]) 
{
	//int stuavg;
	cout << "                    Lightning Lanes Bowling Class           " << endl;
	cout << "------------------------------------------------------------\n" << endl;
	cout << setw(10) << " Team" << setw(8) << "Student" << setw(8) << " Last Weeks 3-Game Avg" << setw(10)
		<< " This weeks 3-Game Avg" << endl;
	// for loop will iterate through all the students
	for (int i = 0; i <= 2; i++)
	{
		int stuavg;
		int *stustuff = &stuavg;
		     // Get the average score
		for (int j = 0; j <= 2; j++) {
			
			// the value of stustuff is the value of stustuff plus the scores
			*stustuff = *stustuff + data[i]->score;
			// calculate the average by dividing by 3
			*stustuff = *stustuff / 3;
			//&data[i]->avg = stuavg;
		}  // end inner for loop
			
		// Display the data 
		cout << data[i]->team << data[i]->student << stuavg  << endl;
	}  // end outer for loop
}