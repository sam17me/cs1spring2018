
/*Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate.
The program should then output each candidate's name, the number of votes received, and the percentage of the total votes received by the candidate. 
Your program should also output the winner of the election. A sample output is:
Candidate

Votes Received

% of Total Votes

The Winner of the Election is Duffy.
*/
/*  
©Copyright  Merrell D. Gilbert

*/
#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;

/***********************************Function declaration***********************************************/

void printout();
/**********************************End Functon Declarations*******************************************/


int main() {
	
	 struct candidates
	{
		string name;
		int votes;
		float percentvotes;
	};

	// Get the candidate data
	candidates candidateTally[5];
	for (int i = 0; i <=4; i++) {
		cout << flush;
			system("cls");
		cout << "\nVoting data for candidate " << i << "\n" << endl;
		cout << " ------------------------------------------------------------------" << endl;
		cout << "\nPlease enter candidate " << i << " last name: \n" << endl;
		cin >> candidateTally[i].name;
		cout << "\nPlease enter candidate " << i << " total votes: \n";
		cin >> candidateTally[i].votes;
		
	}

	// Calculate the percent votes from the total
	
	// First get the total votes
	float totalVotes = 0.0;
	for (int k = 0; k <= 4; k++) 
		totalVotes = totalVotes + candidateTally[k].votes;
	
	
	
	//  Next calculate the percent of votes and assign values to candidatesTally[x].percentVotes
	int percentVotes = 0;
	for (int r = 0; r <= 4; r++) {
		candidateTally[r].percentvotes = (candidateTally[r].votes/totalVotes) * 100 ;
	
	}
	
	/******* DISPLAY THE RESULTS *********/
	
	cout << "\nCandidate" << setw(15) << "Votes " << setw(15)<< " Percentile" << endl;
	cout << "\n.........................................................................\n" << endl;
			
	for (int j = 0; j <=4; j++) {
		cout <<  candidateTally[j].name << setw(10)<< right << candidateTally[j].votes << setw(10) <<right <<fixed << setprecision(2) << "%" << candidateTally[j].percentvotes << endl;
	}
	cout << "Total Votes: " << totalVotes << endl;

	// Sort algorithm to select the winner
	int b, m, temp;
	
	m = 0;
	temp = 0;
	bool sorted = false;
	
		sorted = true;
		for (b = 0; b <= 5 - 1; b++) {
			if (candidateTally[b].percentvotes < candidateTally[b + 1].percentvotes) {
				temp = candidateTally[b].percentvotes;
				// swap the value of the first candidate with the next one up
				candidateTally[b].percentvotes = candidateTally[b + 1].percentvotes;
				// then assign the  value of the first one with the second.
				candidateTally[b].percentvotes = temp;
				sorted = false;
			}  // end if statement
		
		 
    
	}


	cout << "\n Winner: " << candidateTally[4].name << endl;
	
	system("pause");
	
} // end main





	
	


/*
Function Printout
Prints out the candidate information.
@param takes no parameters
*/

