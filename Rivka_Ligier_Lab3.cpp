/* 
   Author: Rivka Ligier
   Course: 135,136
   Instructor: Prof. Ilya
   Assisgnemnt: Lab 3
   
   This program displays a menu of 5 different shapes the user can choose to draw using asterisks.
 */

#include <iostream>
#include <cmath>
using namespace std;


//Declaring functions that will be used in the program
//Void was chosen for the function type b/c we are not returning any kind of value

void DrawRec (int, int);
void LowTriangle (int);
void Trapezoid (int, int);
void UpperTriangle (int);
void Circle (int);


//Draws a rectangle (1)
void DrawRec(int width, int height)
{
	//i serves as the counter for the height
	for (int i=0; i<height; i++)
		{
            //x serves as the counter for the width
			for(int x=0; x<width; x++)
				{
                    /*
                    since this is a hollow rectangle we only need to draw the outside
                    which is the first and last columns of height and first and last rows of width
                    */
                    
					if(i==0 || i==height-1 || x==0 || x==width-1)
					
						cout<<"*";
			
					else 
						cout<<" ";
                }
			
                    cout<<endl;
		}		
}

//Draws a right triangle (2)

void LowTriangle(int SideLength)
{
    //i serves as the counter for the rows (SideLength)
	for (int i=0; i<SideLength; i++)
		{
            // as x increases until i is equal, print *
			for (int x=0; i>=x; x++)
			
			cout<<"*";
			cout<<endl;
            
        }
}

//Draws a trapezoid (3)

void Trapezoid(int side, int height)
{
    //Since the side and heeight are "equal" we can compare the height and side and if "approved" increase the height
    for(int i=height; i<=side; i++)
    {
        //counter for the * and x serves as a "stopper" for the loop
        for(int x=0; i>x; x++)
        {
            cout<<"*";
        
        }
        cout << endl;
    }
}

//Draws the upper part of a right triangle (4) - similar to #2
//Triangle starts with a full row of * and dereases slowly moving towards the length

void UpperTriangle(int SideLength2)
{
    //we want the number the user entered to decrease each round
    for(int i=SideLength2; i>0; i--)
    {
        //counter for the spaces & we are subtracting 1 from the user input
        for(int x=0; x<SideLength2-i; x++)
            
                cout<<" ";
            //counter for the * and how many to print on each row (i)
            for(int t=1;t<=i; t++)
            {
                cout<<"*";
                
            }

        cout<<endl;

    }
}

// Draws a circle

void Circle(int r)
{
   //Pythagoras Theorem: x^2+y^2=r^2
    
    int dist;
    
    for(int i=0; i<=2*r; i++) //serves as x-cordinate
    {
        
        for(int x=0; x<=2*r; x++) //serves as y-cordinate
        {
    
        //calculates the distance from the center of the circle
            
        dist = sqrt((i-r)*(i-r)+(x-r)*(x-r));
        
           
            // every point on the circle is a point away from the center of the circle which is the (r,r) -
            //this statment checks if the point is in the same position as the radius and if not, prints a *
            if(dist==r)
            {
            
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        
        }
            cout<<endl;

    }
    
}

int main()
{

int UserIn, wRec, hRec, SLTriangle, STrapo, HTrapo, SLTriangle2, rad;

//prompts the user to select from the below menu
cout<<"Please enter the number for the shape you'd like to draw using asterisks: \n"<<endl;
   
//menu displayed to user of possibe choices
cout<<"1. Rectangle"<<endl
    <<"2. Lower Triangle Part of a Square"<<endl
    <<"3. Trapezoid"<<endl
    <<"4. Upper Triangle Part of a Square"<<endl
    <<"5. Circle"<<endl
    <<"TO EXIT THIS PROGRAM PLEASE PRESS 6"<<endl;

//receives the user input
cin>> UserIn;

//The switch statement holds different cases for the user and will naviagte once it receives user input.

	switch(UserIn)
    {
		
		case 1: 
			
			cout <<"Please input the width and height of a square you'd like to draw: "<<endl;
			cin >> wRec >> hRec;
			
			DrawRec(wRec, hRec); //calls the function DrawRec
			
			break;
			
		case 2: 
			
			cout << "Please input the side length of a triangle: "<<endl;
			cin >> SLTriangle;
			
			LowTriangle(SLTriangle); //calls the function LowTriangle
			
			break;
			
		case 3:
		
			cout <<"Please input side length and height of a trapezoid: "<<endl;
			cin >> STrapo >> HTrapo;
			
			Trapezoid(STrapo, HTrapo); //calls the function Trapezoid
			
			break;
			
        case 4:
            
            cout<<"Please input the side length to draw the upper part of a triangle: "<<endl;
            cin>>SLTriangle2;
            
            UpperTriangle(SLTriangle2); //calls the function UpperTriangle
            
            break;
		
		case 5: 
			
			cout<< "Please input the radius for a circle: "<<endl;
			cin>> rad;
            
            Circle(rad); //calls the function Circle
			
			break;
            
        case 6:
            
            cout<<"You have chosen to exit the program, goodbye."<<endl;
            
            exit(0); //ALLOWS THE USER TO EXIT THE PROGRAM
            
        default:
        
            cout<< "Please enter a valid entry or press 6 to exit the program"<<endl;
            cin>>UserIn;
        
            break;
            
    }

	return 0;

}