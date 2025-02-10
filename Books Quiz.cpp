/*Name:Kento Feynura
Reg no:Bscit-05-0151/2024
Campus:TRC
GitUsername:feynura*/


#include<iostream>
 using namespace std;
 int main(){
 	
 	string bookID;
 	int dueDate,returnDate;
 	
 	cout<<"Enter the book ID:";
 	cin>>bookID;
 	
 	cout<<"Enter the dueDate:";
 	cin>>dueDate;
 	
 	cout<<"Enter the returnDate:";
 	cin>>returnDate;
 	
 	int overdueDays = returnDate-dueDate;
 	int fineRate= 0;
 	int fineAmount= 0;
 	
 	if(overdueDays<=7)
 	{
 		fineRate=20;
	 }

	 if(overdueDays<=14)
	 {
	 	fineRate=50;
	 }
	 
	 else
	 {
	 	fineRate=100;
	 }
	 fineAmount= fineRate*overdueDays;
	 
 	return 0;
 }
 
