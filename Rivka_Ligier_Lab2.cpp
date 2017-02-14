#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	// Verhulst Formula: p(n+1)= (1+g-h)p(n)-gp(n)^2/M.
	
	//--------------------------- variable declaration --------------------
	double g, h, pN, M;
	
	/* 
	   g is rate of population growth
	   h is the minimum rate of loss
	   pN is the starting value of the population
	   M is the carryng capacity of population
	*/
	
	int MaxNumYear; 
	
	//This is the a variable that will hold the max number of years to calculate and show population
	
	// ----------------------------------------------------------------------------
	// I used a do .. while loop because it can perform error tests more efficiently 
	
do{
	cout<<"Please enter the intial population: "; 
	cin>>pN;
	
}	while(pN<1); //We must assume there is a population of at least 1 for p(0)

	
do{	
	//Calculates 1 to k years, this is asking the user for 'k' years
	
	cout<<"Please enter the number of years you would like to calculate (max year): "; 
	cin>>MaxNumYear;

} while(MaxNumYear<1);	//We must begin with a year 


do{
	cout<<"Please enter the minimum loss rate (%): ";
	cin>>h;
	
} while(h<0 || h>100); // h must be less than 100% but also greater than 0%
 
	h=h/100; // turns the % into a decimal to use in the formula

do{
	cout<<"Please enter the population growth rate (%): ";
	cin>>g;
	
} while(g<0);
	
	g=g/100; // turns % into a decimal for future use

do{
	
	cout <<"Please enter the carrying capacity of the population: ";
	cin>>M;
	
} while(M<1); // We must assume there is an intial capacity of 1


int y; //counting variable for year

cout <<setprecision(2)<<fixed<<showpoint; // rounds decimal numbers

for(y=0; y<MaxNumYear; y++) {
	
	// calculating population for each year (y+1)
	
	double Poplt = ((1+g-h)*pN)-(g*(pN*pN)/M); 
	
	cout<<setw(10) <<"Year"<< "   " << setw(12) << "Popualation" <<endl;
	cout<<setw(10) <<(y+1)<< "   " << setw(12) << Poplt <<endl;
	
	pN = Poplt; // sets the new population to pN that way we can calculate the population for the year after (y+1)
}

/* ---------------------------------------------- PART 2 -------------------------------------------

If the value of g (growth rate percentage of population) is increased after 260% we will begin to see chatotic behavior.
To come this conclusion I entered the numbers that were given in the lab assignment and increased g to 260% = 2.6 in decimal. 

The values of g must be less than 260% in order to not achieve chaotic behavior but will display oscillating behavior instead.
Any percentange lower than (g) 100% will not oscilliate but increase slowly as each year goes by.

*/

return 0;

}