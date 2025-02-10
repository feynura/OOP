/*name:feynura kento
reg no:BSCIT-05-0151/2024
Campus:Thika Road Campus
GitUsername: feynura*/



#include<iostream>
using namespace std;

class BankAccount{
	private:
		string Accountholder;
		double Balance;
		
		public:
			void setAccountholder(string a){
				Accountholder=a;
			}
			string getAccountholder(){
				return Accountholder;
			}
			void setBalance(double b){
				Balance=b;
			}
			double getBalance(){
				return Balance;
		
			}
};

int main(){
	BankAccount B1;
	B1.setAccountholder("Nura");
	cout<<"Accountholder:"<<B1.getAccountholder()<<endl;
	B1.setBalance("4000");
	cout<<"Balance:"<<B1.getBalance()<<endl;
	
	return 0;
}
