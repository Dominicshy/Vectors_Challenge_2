#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//let the program to read first and can use it use to though out the program
void Menu();

int main() {
	//setup our variable in our program
	int i;
	double g;
	int m;
	int total = 0;
	int t;
	double l = 100;
	double h = 0;

	int sum = 0;
	//vector help us storge our user input as grade and what data type it is
	vector<double> Grade;
	// let the user to choose what case and what the case do for them
	Menu();
	cin >> i;
	
	
 do {
	 
	 switch (i) {

	 case 1:		
		 //let the user to add a grade by use variable to storging it 
		 cout << "add Grade" << endl;
		 cin >> g;
		 //if user input anything but a number would lead to try input again
		 if (cin.fail()) {
			 cin.clear();
			 cin.ignore();
			 cout << "invaild input try again" << endl;
			 
		 }
		 else {
			 // if it is a number we but into the stack of the vector 
			 Grade.push_back(g);
			 // I use this to help track how many grade did the user add to the stack of the vector
			 total = total + 1;
			 Menu();
			 cin >> i;
		 }
		 

		 break;
	 case 2:
		 // this for if the vector has no grade add to do anything and pormt the user to the Menu
		 if (total == 0) {

			 cout << "there is no grade recored" << endl;
			 Menu();
			 cin >> i;
		 }
		 // if vector has number then we check each one and print until we have all of the number printed
		 else {
			 for (int v = 0; v < total; v++) {
				 cout << Grade[v] << endl;
			 }
			 Menu();
			 cin >> i;
		 }
	
		 break;
		
	 case 3:
		 // I use this as highest it can get per grade as Max it can be
		 m = total * 100;
		 // this for if the vector has no grade add to do anything and pormt the user to the Menu
		 if (total == 0) {
			 cout << "there is no grade recorded" << endl;
			 Menu();
			 cin >> i;
			 //if their is number in vector then we have to add all of grade togeter 
		 }
		 else {
			 double a = 0;
			 for (int v = 0; v < total; v++) {
				 a = a + Grade[v];
			 }
			double avg = a / m;

			// have the avg into a whole number to help the user and program read it more easier and thne print it out
			avg = avg * 100;
			cout << "The average Grade is " << avg << endl;
			Menu();
			cin >> i;
		 }
		 break;

	 case 4:
		 // use this to find highest grade out of the vector
		 for (int v = 0; v < total; v++) {
			 for (; h < Grade[v]; ) {
				 h = Grade[v];

			 }
		 }
		 // use to find the lowest grade out of the vector
		 for (int v = 0; v < total; v++) {
			 for (; l > Grade[v]; ) {
				 l = Grade[v];
			 }
		 }
		 // if the vector have nothing in it
		 if (total == 0) {

			 cout << "there is no grade recored" << endl;
			 Menu();
			 cin >> i;
		 }
		 //then print out the highest and lowest grade in our vector
		 else {
			 cout << "The highest Grade is " << h << endl;
			 cout << "The lowest Grade is " << l << endl;
			 Menu();
			 cin >> i;
		 }
		 break;
	 case 5:
		 
		 // if there no grade in vector
		   if (total == 0) {

			 cout << "there is no grade recored" << endl;
			 Menu();
			 cin >> i;
		 }
		 else {
			   // then ask the user the threshold that are over or equeal to it
			   cout << "enter your threshold" << endl;
			   cin >> t;
			   if (cin.fail()) {
				   cin.clear();
				   cin.ignore();
				   cout << "invaild input try again" << endl;
				  
				   
			   }
			   else {
 //then check each one if is equeal or over the threshold set by user then have a total of number that fit the threshold amount
		 cout << "list of number over or equeal to the threshold" << endl;
		 for (int v = 0; v < total; v++) {
			 if (t <= Grade[v]) {
				 sum = sum + 1;
				 //we then have them print in a list for the user 
				 cout << Grade[v] << endl;

			 }
		 }
		 // then print the total grade that was over or equel
		 cout << "The total of nunber that are over or equel to the threshold is " << sum << endl;
		 Menu();
		 cin >> i;
		 }
			
		 }
		 
		 break;
		 // if the user want to quit/leave the program 
	 case 6:
		 cout << "now ending program" << endl;

		 break;
	 default:
		 // if they input anything but a number 
		 if (cin.fail()) {
		 cin.clear();
		 cin.ignore();
		 cout << "invaild input try again" << endl;
		 Menu();
		 cin >> i;
		 break;
	 }
		 // if the input is out of bound of the case we have set
		 else {
			 cout << "invaild input try again" << endl;
			 Menu();
			 cin >> i;
			 break;
		 }
	 }
	 // use to loop until it hit 6 to stop the loop
 } while (i != 6);
 
	 return 0;
}
//here is the code for menu to reuse thought the program for more clean and less cutter in the code for me
void Menu() {
	cout << "UI Menu" << endl;
	cout << "1 Add a Grade" << endl;
	cout << "2 Display All Grade" << endl;
	cout << "3 Calculate Average Grade " << endl;
	cout << "4 Find Highest and Lowest Grade" << endl;
	cout << "5 count Grades above Threshold" << endl;
	cout << "6 quit" << endl;
	

}