#include <iostream>
using namespace std;

int main(){
	
	
	void DrawTriangle(int, int);
	void TriangleRows(int);
		
	int THeight, WHeight, r;
	
	cout<<"Please enter the height and width of the triangle: ";
	cin >> THeight>>WHeight;
	
	DrawTriangle (THeight, WHeight);

	cout<<"How many rows are in the triangle: ";
	cin >>r;
	
	TriangleRows(r);

	return 0;

	}


void DrawTriangle(int TH, int WH)
{
	

for(int i=0; i<TH; i++){
	
	for(int j=0; j<WH; j++){
		
	}
}
}

void TriangleRows(int rows){
	
    for ( int i=1; i<= rows; ++i)
      {
          for(int j = 1; j <=i; ++j)
          {
              cout << "* ";
          }
          cout << "\n";
	
	
}
}